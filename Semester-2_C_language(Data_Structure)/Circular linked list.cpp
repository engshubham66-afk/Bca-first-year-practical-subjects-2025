#include <stdio.h>
#include <stdlib.h>

// Structure of node
struct Node {
    int data;
    struct Node* next;
};

struct Node* head = NULL;

// Function to create circular linked list
void create() {
    int n, i, value;
    struct Node *newNode, *temp;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        newNode = (struct Node*)malloc(sizeof(struct Node));

        printf("Enter data for node %d: ", i + 1);
        scanf("%d", &value);

        newNode->data = value;
        newNode->next = NULL;

        if(head == NULL) {
            head = newNode;
            newNode->next = head; // Circular link
        } else {
            temp = head;
            while(temp->next != head) {
                temp = temp->next;
            }
            temp->next = newNode;
            newNode->next = head; // Maintain circular structure
        }
    }
}

// Function to delete last node
void deleteEnd() {
    struct Node *temp, *prev;

    if(head == NULL) {
        printf("List is empty\n");
        return;
    }

    // If only one node
    if(head->next == head) {
        free(head);
        head = NULL;
        printf("Last node deleted, list is now empty\n");
        return;
    }

    temp = head;
    while(temp->next != head) {
        prev = temp;
        temp = temp->next;
    }

    prev->next = head; // Remove last node
    free(temp);

    printf("Last node deleted successfully\n");
}

// Display function
void display() {
    struct Node* temp;

    if(head == NULL) {
        printf("List is empty\n");
        return;
    }

    temp = head;
    printf("List: ");
    do {
        printf("%d -> ", temp->data);
        temp = temp->next;
    } while(temp != head);
    printf("(back to head)\n");
}

// Main function
int main() {
    int choice;

    do {
        printf("\n--- Circular Linked List ---\n");
        printf("1. Create\n");
        printf("2. Display\n");
        printf("3. Delete from End\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                create();
                break;
            case 2:
                display();
                break;
            case 3:
                deleteEnd();
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice\n");
        }
    } while(choice != 4);

    return 0;
}
