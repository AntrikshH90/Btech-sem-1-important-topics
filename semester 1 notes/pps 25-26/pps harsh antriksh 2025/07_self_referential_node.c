#include <stdio.h>

// Self-Referential Structure
struct Node {
    int data;           
    struct Node *next;  // Pointer to the NEXT node
};

int main() {
    // Creating two nodes manually for demonstration
    struct Node n1, n2;

    n1.data = 10;
    n1.next = &n2; // Link n1 to n2

    n2.data = 20;
    n2.next = NULL; // End of list

    printf("Node 1 Data: %d\n", n1.data);
    printf("Node 2 Data (accessed via Node 1): %d\n", n1.next->data);

    return 0;
}
