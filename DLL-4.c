#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node {
    char signalID[10];
    struct Node *prev;
    struct Node *next;
};

int main() {
    struct Node *head = NULL, *newNode = NULL, *temp = NULL;
    struct Node *curr;
    int n, i;
    char delID[10];

    // Create doubly circular linked list
    printf("Enter number of signals: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        newNode = (struct Node *)malloc(sizeof(struct Node));
        printf("Enter signal ID: ");
        scanf("%s", newNode->signalID);

        if (head == NULL) {
            head = newNode;
            newNode->next = head;
            newNode->prev = head;
        } else {
            temp = head->prev;   // last node

            temp->next = newNode;
            newNode->prev = temp;

            newNode->next = head;
            head->prev = newNode;
        }
    }

    // Delete a signal
    printf("Enter signal ID to delete: ");
    scanf("%s", delID);

    curr = head;

    if (head == NULL) {
        printf("List is empty\n");
        return 0;
    }

    do {
        if (strcmp(curr->signalID, delID) == 0) {

            // Only one node
            if (curr->next == curr) {
                free(curr);
                head = NULL;
            }
            // Deleting head
            else if (curr == head) {
                curr->prev->next = curr->next;
                curr->next->prev = curr->prev;
                head = curr->next;
                free(curr);
            }
            // Deleting middle or last
            else {
                curr->prev->next = curr->next;
                curr->next->prev = curr->prev;
                free(curr);
            }
            break;
        }
        curr = curr->next;
    } while (curr != head);

    // Display list
    if (head != NULL) {
        printf("\nSignal List After Deletion:\n");
        temp = head;
        do {
            printf("%s <-> ", temp->signalID);
            temp = temp->next;
        } while (temp != head);
        printf("(back to %s)", head->signalID);
    }

    return 0;
}
