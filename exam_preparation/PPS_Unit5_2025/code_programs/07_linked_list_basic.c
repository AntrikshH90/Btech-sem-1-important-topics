/*
 * Program: Basic Linked List operations
 * Topic: Self-referential structures
 * Probability: ⭐⭐⭐ HIGH
 * AKTU Pattern: Very important - concept of linked list
 */

#include <stdio.h>
#include <stdlib.h>

// Self-referential structure for Node
struct Node {
    int data;
    struct Node *next;  // Pointer to next node (same type)
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    if(newNode == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to insert at beginning
struct Node* insertAtBeginning(struct Node *head, int data) {
    struct Node *newNode = createNode(data);
    newNode->next = head;
    head = newNode;
    printf("Inserted %d at beginning\n", data);
    return head;
}

// Function to insert at end
struct Node* insertAtEnd(struct Node *head, int data) {
    struct Node *newNode = createNode(data);
    
    if(head == NULL) {
        printf("Inserted %d (first node)\n", data);
        return newNode;
    }
    
    struct Node *temp = head;
    while(temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
    printf("Inserted %d at end\n", data);
    return head;
}

// Function to display linked list
void display(struct Node *head) {
    if(head == NULL) {
        printf("List is empty!\n");
        return;
    }
    
    struct Node *temp = head;
    printf("Linked List: ");
    while(temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Function to count nodes
int countNodes(struct Node *head) {
    int count = 0;
    struct Node *temp = head;
    while(temp != NULL) {
        count++;
        temp = temp->next;
    }
    return count;
}

// Function to search for a value
int search(struct Node *head, int key) {
    struct Node *temp = head;
    int position = 1;
    
    while(temp != NULL) {
        if(temp->data == key) {
            return position;
        }
        temp = temp->next;
        position++;
    }
    return -1;  // Not found
}

// Function to delete a node
struct Node* deleteNode(struct Node *head, int key) {
    if(head == NULL) {
        printf("List is empty!\n");
        return head;
    }
    
    // If head node contains the key
    if(head->data == key) {
        struct Node *temp = head;
        head = head->next;
        free(temp);
        printf("Deleted %d from list\n", key);
        return head;
    }
    
    // Search for the key
    struct Node *temp = head;
    while(temp->next != NULL && temp->next->data != key) {
        temp = temp->next;
    }
    
    if(temp->next == NULL) {
        printf("%d not found in list!\n", key);
        return head;
    }
    
    struct Node *nodeToDelete = temp->next;
    temp->next = temp->next->next;
    free(nodeToDelete);
    printf("Deleted %d from list\n", key);
    
    return head;
}

int main() {
    struct Node *head = NULL;
    int choice, value, position;
    
    printf("=== LINKED LIST OPERATIONS ===\n\n");
    
    while(1) {
        printf("\n1. Insert at beginning\n");
        printf("2. Insert at end\n");
        printf("3. Display list\n");
        printf("4. Count nodes\n");
        printf("5. Search value\n");
        printf("6. Delete node\n");
        printf("7. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1:
                printf("Enter value: ");
                scanf("%d", &value);
                head = insertAtBeginning(head, value);
                break;
                
            case 2:
                printf("Enter value: ");
                scanf("%d", &value);
                head = insertAtEnd(head, value);
                break;
                
            case 3:
                display(head);
                break;
                
            case 4:
                printf("Total nodes: %d\n", countNodes(head));
                break;
                
            case 5:
                printf("Enter value to search: ");
                scanf("%d", &value);
                position = search(head, value);
                if(position != -1) {
                    printf("%d found at position %d\n", value, position);
                } else {
                    printf("%d not found in list\n", value);
                }
                break;
                
            case 6:
                printf("Enter value to delete: ");
                scanf("%d", &value);
                head = deleteNode(head, value);
                break;
                
            case 7:
                printf("Exiting...\n");
                return 0;
                
            default:
                printf("Invalid choice!\n");
        }
    }
    
    return 0;
}

/*
 * Sample Output:
 * === LINKED LIST OPERATIONS ===
 * 
 * 1. Insert at beginning
 * 2. Insert at end
 * 3. Display list
 * 4. Count nodes
 * 5. Search value
 * 6. Delete node
 * 7. Exit
 * Enter choice: 2
 * Enter value: 10
 * Inserted 10 (first node)
 * 
 * Enter choice: 2
 * Enter value: 20
 * Inserted 20 at end
 * 
 * Enter choice: 2
 * Enter value: 30
 * Inserted 30 at end
 * 
 * Enter choice: 1
 * Enter value: 5
 * Inserted 5 at beginning
 * 
 * Enter choice: 3
 * Linked List: 5 -> 10 -> 20 -> 30 -> NULL
 * 
 * Enter choice: 4
 * Total nodes: 4
 * 
 * Enter choice: 5
 * Enter value to search: 20
 * 20 found at position 3
 * 
 * Enter choice: 6
 * Enter value to delete: 10
 * Deleted 10 from list
 * 
 * Enter choice: 3
 * Linked List: 5 -> 20 -> 30 -> NULL
 * 
 * Enter choice: 7
 * Exiting...
 * 
 * Key Concepts:
 * - Self-referential structure (struct Node contains struct Node*)
 * - Dynamic memory allocation for nodes
 * - Pointer manipulation for linking nodes
 * - Traversing linked list
 * - Insertion, deletion, searching operations
 */
