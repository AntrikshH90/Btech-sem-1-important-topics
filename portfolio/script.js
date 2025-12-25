// Sticky Navbar and Scroll Active Link
const navbar = document.getElementById('navbar');
const navLinks = document.querySelectorAll('.nav-links a');
const sections = document.querySelectorAll('section, header');

window.addEventListener('scroll', () => {
    // Navbar background on scroll
    if (window.scrollY > 50) {
        navbar.classList.add('scrolled');
    } else {
        navbar.classList.remove('scrolled');
    }

    // Active link highlighting
    let current = '';
    sections.forEach(section => {
        const sectionTop = section.offsetTop;
        const sectionHeight = section.clientHeight;
        if (window.pageYOffset >= (sectionTop - 200)) {
            current = section.getAttribute('id');
        }
    });

    navLinks.forEach(link => {
        link.classList.remove('active');
        if (link.getAttribute('href').includes(current)) {
            link.classList.add('active');
        }
    });
});

// Scroll Reveal Animations
const observerOptions = {
    threshold: 0.15
};

const observer = new IntersectionObserver((entries) => {
    entries.forEach(entry => {
        if (entry.isIntersecting) {
            entry.target.classList.add('in-view');
        }
    });
}, observerOptions);

document.querySelectorAll('.animate-up, .animate-left, .animate-right, .animate-scale, .animate-fade').forEach(el => {
    observer.observe(el);
});

// Note Viewer Modal Logic
const modal = document.getElementById('note-modal');
const modalTitle = document.getElementById('modal-title');
const noteContent = document.getElementById('note-content');
const loader = document.querySelector('.loader-spinner');
const closeModal = document.querySelector('.close-modal');
const noteLinks = document.querySelectorAll('.note-link');

// Global Workspace Explorer Logic
let workspaceData = null;

async function initExplorer() {
    const explorerGrid = document.getElementById('explorer-grid');
    const filterContainer = document.getElementById('category-filters');
    const searchInput = document.getElementById('file-search');
    const loader = document.getElementById('explorer-loader');

    try {
        const response = await fetch('assets/files.json');
        workspaceData = await response.json();

        // Setup Filters
        workspaceData.categories.forEach(cat => {
            const btn = document.createElement('button');
            btn.className = 'filter-pill';
            btn.dataset.category = cat.name;
            btn.innerHTML = `<i class="${cat.icon}"></i> ${cat.name}`;
            filterContainer.appendChild(btn);
        });

        renderFiles('all');
        setupFilterListeners();
        setupSearchListener();

        if (loader) loader.style.display = 'none';
    } catch (e) {
        console.error("Failed to load workspace data:", e);
        if (loader) loader.innerHTML = "<p>Please use a local server to view explorer.</p>";
    }
}

function renderFiles(category, query = '') {
    const grid = document.getElementById('explorer-grid');
    grid.innerHTML = '';

    let allFiles = [];
    workspaceData.categories.forEach(cat => {
        cat.files.forEach(f => {
            allFiles.push({ ...f, category: cat.name, icon: cat.icon });
        });
    });

    const filtered = allFiles.filter(f => {
        const matchesCat = category === 'all' || f.category === category;
        const matchesQuery = f.name.toLowerCase().includes(query.toLowerCase());
        return matchesCat && matchesQuery;
    });

    if (filtered.length === 0) {
        grid.innerHTML = `<div class="no-results">No files found matching "${query}"</div>`;
        return;
    }

    filtered.forEach(file => {
        const card = document.createElement('div');
        card.className = 'file-mini-card mica-effect animate-up';
        card.innerHTML = `
            <div class="file-icon"><i class="${getFileIcon(file.type)}"></i></div>
            <div class="file-info">
                <h4>${file.name}</h4>
                <span>${file.category}</span>
            </div>
            <a href="${file.path}" class="file-link note-link"><i class="fas fa-external-link-alt"></i></a>
        `;
        grid.appendChild(card);
    });

    // Re-attach note-link listeners
    attachNoteListeners();
}

function getFileIcon(type) {
    switch (type) {
        case 'md': return 'far fa-file-alt';
        case 'c': return 'fas fa-code';
        case 'html': return 'fab fa-html5';
        default: return 'far fa-file';
    }
}

function setupFilterListeners() {
    const pills = document.querySelectorAll('.filter-pill');
    pills.forEach(pill => {
        pill.addEventListener('click', () => {
            pills.forEach(p => p.classList.remove('active'));
            pill.classList.add('active');
            renderFiles(pill.dataset.category, document.getElementById('file-search').value);
        });
    });
}

function setupSearchListener() {
    const search = document.getElementById('file-search');
    search.addEventListener('input', (e) => {
        const activeCat = document.querySelector('.filter-pill.active').dataset.category;
        renderFiles(activeCat, e.target.value);
    });
}

function attachNoteListeners() {
    const noteLinks = document.querySelectorAll('.note-link');
    noteLinks.forEach(link => {
        // Remove existing to avoid double listeners
        const newLink = link.cloneNode(true);
        link.parentNode.replaceChild(newLink, link);

        newLink.addEventListener('click', async (e) => {
            const url = newLink.getAttribute('href');
            const fileName = newLink.innerText.trim() || "File Preview";

            const isLocal = window.location.protocol === 'file:';

            if (isLocal) {
                console.log("Local protocol detected. Opening in new tab.");
                window.open(url, '_blank');
                return;
            }

            e.preventDefault();
            const modal = document.getElementById('note-modal');
            const modalTitle = document.getElementById('modal-title');
            const noteContent = document.getElementById('note-content');
            const loader = document.getElementById('modal-loader');

            modal.classList.add('active');
            document.body.style.overflow = 'hidden';
            modalTitle.innerText = fileName;
            noteContent.innerHTML = '';
            loader.style.display = 'block';

            try {
                const response = await fetch(url);
                if (!response.ok) throw new Error('Failed to load');
                const text = await response.text();
                const html = convertMdToHtml(text);

                setTimeout(() => {
                    loader.style.display = 'none';
                    noteContent.innerHTML = html;
                }, 500);
            } catch (error) {
                loader.style.display = 'none';
                noteContent.innerHTML = `<div class="error-msg">Failed to load. Opening directly...</div>`;
                setTimeout(() => {
                    window.open(url, '_blank');
                    modal.classList.remove('active');
                    document.body.style.overflow = 'auto';
                }, 1500);
            }
        });
    });
}

// Initialize Explorer on load
document.addEventListener('DOMContentLoaded', () => {
    initExplorer();
});

if (closeModal) {
    closeModal.addEventListener('click', () => {
        modal.classList.remove('active');
        document.body.style.overflow = 'auto';
    });
}

window.addEventListener('click', (e) => {
    if (e.target === modal) {
        modal.classList.remove('active');
        document.body.style.overflow = 'auto';
    }
});

// Minimalistic MD Parser for presentation
function convertMdToHtml(md) {
    if (!md) return '';
    return md
        .replace(/^# (.*$)/gim, '<h1>$1</h1>')
        .replace(/^## (.*$)/gim, '<h2>$1</h2>')
        .replace(/^### (.*$)/gim, '<h3>$1</h3>')
        .replace(/^\* (.*$)/gim, '<li>$1</li>')
        .replace(/^- (.*$)/gim, '<li>$1</li>')
        .replace(/`([^`]+)`/g, '<code>$1</code>')
        .replace(/\n/g, '<br>');
}

// Magnetic Button Effect and Profile Parallax
const btns = document.querySelectorAll('.btn-primary, .btn-text, .kb-card');
btns.forEach(btn => {
    btn.addEventListener('mousemove', (e) => {
        const rect = btn.getBoundingClientRect();
        const x = e.clientX - rect.left - rect.width / 2;
        const y = e.clientY - rect.top - rect.height / 2;
        btn.style.transform = `translate(${x * 0.15}px, ${y * 0.15}px)`;
    });

    btn.addEventListener('mouseleave', () => {
        btn.style.transform = 'translate(0, 0)';
    });
});

// Profile Image Professional Interactive Tilt & Glimmer
const profileImg = document.querySelector('.profile-img.blended');
const profileFrame = document.querySelector('.profile-frame');

if (profileImg && profileFrame) {
    profileFrame.addEventListener('mousemove', (e) => {
        const rect = profileImg.getBoundingClientRect();
        const mouseX = e.clientX - rect.left;
        const mouseY = e.clientY - rect.top;

        const centerX = rect.width / 2;
        const centerY = rect.height / 2;

        const rotateX = (mouseY - centerY) / 20;
        const rotateY = (centerX - mouseX) / 20;

        profileImg.style.transform = `rotateX(${rotateX}deg) rotateY(${rotateY}deg) scale(1.05)`;

        // Dynamic Glimmer Effect
        const glimmerX = (mouseX / rect.width) * 100;
        const glimmerY = (mouseY / rect.height) * 100;
        profileImg.style.setProperty('--glimmer-x', `${glimmerX}%`);
        profileImg.style.setProperty('--glimmer-y', `${glimmerY}%`);
    });

    profileFrame.addEventListener('mouseleave', () => {
        profileImg.style.transform = `rotateX(0deg) rotateY(0deg) scale(1)`;
    });
}

// Mobile Menu Toggle
const mobileMenu = document.getElementById('mobile-menu');
const navLinksContainer = document.querySelector('.nav-links');

if (mobileMenu) {
    mobileMenu.addEventListener('click', () => {
        navLinksContainer.classList.toggle('active');
        mobileMenu.querySelector('i').classList.toggle('fa-bars');
        mobileMenu.querySelector('i').classList.toggle('fa-times');
    });
}

// Close mobile menu when a link is clicked
document.querySelectorAll('.nav-links a').forEach(link => {
    link.addEventListener('click', () => {
        navLinksContainer.classList.remove('active');
        if (mobileMenu) {
            mobileMenu.querySelector('i').classList.add('fa-bars');
            mobileMenu.querySelector('i').classList.remove('fa-times');
        }
    });
});

// Contact Form Submission Simulation
const contactForm = document.getElementById('contact-form');
if (contactForm) {
    contactForm.addEventListener('submit', (e) => {
        e.preventDefault();
        const btn = contactForm.querySelector('button');
        const originalText = btn.innerHTML;

        btn.innerHTML = 'Sending... <i class="fas fa-spinner fa-spin"></i>';
        btn.disabled = true;

        // Simulate API call
        setTimeout(() => {
            btn.innerHTML = 'Message Sent! <i class="fas fa-check"></i>';
            btn.style.backgroundColor = '#28a745';
            contactForm.reset();

            setTimeout(() => {
                btn.innerHTML = originalText;
                btn.style.backgroundColor = '';
                btn.disabled = false;
            }, 3000);
        }, 1500);
    });
}

// Smooth Scrolling
document.querySelectorAll('a[href^="#"]').forEach(anchor => {
    anchor.addEventListener('click', function (e) {
        e.preventDefault();
        const targetId = this.getAttribute('href');
        if (targetId === '#') return;
        const target = document.querySelector(targetId);
        if (target) {
            window.scrollTo({
                top: target.offsetTop - 70,
                behavior: 'smooth'
            });
        }
    });
});
