const naruto = document.getElementById('naruto');
const gameContainer = document.querySelector('.game-container');
const scoreElement = document.getElementById('scoreValue');
const finalScoreElement = document.getElementById('finalScore');
const startScreen = document.getElementById('startScreen');
const gameOverScreen = document.getElementById('gameOverScreen');

let isJumping = false;
let score = 0;
let gameRunning = false;
let gameSpeed = 5;
let enemySpawnRate = 2000;
let lastEnemySpawnTime = 0;
let enemies = [];
let projectiles = [];
let animationFrameId;

// Audio (Optional - placeholders)
// const jumpSound = new Audio('jump.mp3');
// const attackSound = new Audio('rasengan.mp3');

document.addEventListener('keydown', (e) => {
    if (!gameRunning) return;

    if (e.code === 'Space') {
        jump();
    } else if (e.code === 'KeyX') {
        attack();
    }
});

function startGame() {
    gameRunning = true;
    score = 0;
    gameSpeed = 5;
    enemySpawnRate = 2000;
    scoreElement.innerText = score;
    startScreen.style.display = 'none';
    gameOverScreen.style.display = 'none';

    // Clear existing entities
    enemies.forEach(enemy => enemy.remove());
    projectiles.forEach(proj => proj.remove());
    enemies = [];
    projectiles = [];

    lastEnemySpawnTime = performance.now();
    requestAnimationFrame(gameLoop);
}

function jump() {
    if (isJumping) return;
    isJumping = true;
    naruto.classList.add('jump');

    // Remove class after animation finishes
    setTimeout(() => {
        naruto.classList.remove('jump');
        isJumping = false;
    }, 600); // Match CSS animation duration
}

function attack() {
    // Create Rasengan
    const rasengan = document.createElement('div');
    rasengan.classList.add('rasengan');

    // Position it at Naruto's hand (approximate)
    const narutoRect = naruto.getBoundingClientRect();
    const containerRect = gameContainer.getBoundingClientRect();

    rasengan.style.left = (narutoRect.right - containerRect.left - 20) + 'px';
    rasengan.style.bottom = (containerRect.bottom - narutoRect.bottom + 40) + 'px'; // Adjust height

    gameContainer.appendChild(rasengan);
    projectiles.push(rasengan);

    // Optional: Cooldown logic could go here
}

function spawnEnemy() {
    const enemy = document.createElement('div');
    enemy.classList.add('enemy');
    // Set initial position explicitly for JS movement logic
    enemy.style.left = '800px';
    gameContainer.appendChild(enemy);
    enemies.push(enemy);
}

function gameLoop(timestamp) {
    if (!gameRunning) return;

    // Spawn Enemies
    if (timestamp - lastEnemySpawnTime > enemySpawnRate) {
        spawnEnemy();
        lastEnemySpawnTime = timestamp;
        // Increase difficulty
        if (enemySpawnRate > 800) enemySpawnRate -= 20;
        if (gameSpeed < 15) gameSpeed += 0.05;
    }

    // Move Enemies
    for (let i = enemies.length - 1; i >= 0; i--) {
        const enemy = enemies[i];
        let enemyLeft = parseInt(enemy.style.left);

        // Move left
        enemy.style.left = (enemyLeft - gameSpeed) + 'px';

        // Remove if off screen
        if (enemyLeft < -60) {
            enemy.remove();
            enemies.splice(i, 1);
            score++;
            scoreElement.innerText = score;
        }

        // Collision with Naruto
        if (checkCollision(naruto, enemy)) {
            gameOver();
            return; // Stop loop
        }
    }

    // Move Projectiles
    for (let i = projectiles.length - 1; i >= 0; i--) {
        const proj = projectiles[i];
        let projLeft = parseInt(proj.style.left);

        proj.style.left = (projLeft + 10) + 'px'; // Projectile speed

        // Remove if off screen
        if (projLeft > gameContainer.offsetWidth) {
            proj.remove();
            projectiles.splice(i, 1);
        }

        // Collision with Enemies
        for (let j = enemies.length - 1; j >= 0; j--) {
            const enemy = enemies[j];
            if (checkCollision(proj, enemy)) {
                // Enemy Hit!
                createExplosion(enemy);
                enemy.remove();
                enemies.splice(j, 1);

                proj.remove();
                projectiles.splice(i, 1);

                score += 5; // Bonus for killing
                scoreElement.innerText = score;
                break; // Projectile used up
            }
        }
    }

    requestAnimationFrame(gameLoop);
}

function checkCollision(rect1, rect2) {
    const r1 = rect1.getBoundingClientRect();
    const r2 = rect2.getBoundingClientRect();

    return !(r1.right < r2.left + 20 ||
        r1.left > r2.right - 20 ||
        r1.bottom < r2.top + 20 ||
        r1.top > r2.bottom - 20);
}

function createExplosion(element) {
    // Visual effect for enemy death
    const rect = element.getBoundingClientRect();
    const containerRect = gameContainer.getBoundingClientRect();

    const explosion = document.createElement('div');
    explosion.style.position = 'absolute';
    explosion.style.left = (rect.left - containerRect.left) + 'px';
    explosion.style.bottom = (containerRect.bottom - rect.bottom) + 'px';
    explosion.style.width = '60px';
    explosion.style.height = '80px';
    explosion.style.background = 'orange';
    explosion.style.borderRadius = '50%';
    explosion.style.opacity = '0.8';
    explosion.style.transition = 'all 0.2s';

    gameContainer.appendChild(explosion);

    setTimeout(() => {
        explosion.style.transform = 'scale(2)';
        explosion.style.opacity = '0';
    }, 10);

    setTimeout(() => {
        explosion.remove();
    }, 210);
}

function gameOver() {
    gameRunning = false;
    finalScoreElement.innerText = score;
    gameOverScreen.style.display = 'flex';
}
