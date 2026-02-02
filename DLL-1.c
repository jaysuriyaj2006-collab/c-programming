#include <stdio.h>
#include <stdlib.h>

struct Node {
    int seat;
    struct Node *prev;
    struct Node *next;
};

int main() {
    struct Node *head = NULL, *temp = NULL, *newNode = NULL;
    int n, i, value;

    printf("Enter number of seats: ");
    scanf("%d", &n);

    // Create doubly circular linked list
    for (i = 0; i < n; i++) {
        newNode = (struct Node *)malloc(sizeof(struct Node));
        printf("Enter seat number: ");
        scanf("%d", &value);

        newNode->seat = value;

        if (head == NULL) {
            head = newNode;
            newNode->next = head;
            newNode->prev = head;
        } else {
            temp = head->prev;        // last node

            temp->next = newNode;
            newNode->prev = temp;

            newNode->next = head;
            head->prev = newNode;
        }
    }

    // Display forward
    printf("\nForward:\n");
    temp = head;
    do {
        printf("%d <-> ", temp->seat);
        temp = temp->next;
    } while (temp != head);
    printf("(back to %d)", head->seat);

    // Display backward
    printf("\n\nBackward:\n");
    temp = head->prev;   // start from last node
    do {
        printf("%d <-> ", temp->seat);
        temp = temp->prev;
    } while (temp != head->prev);
    printf("(back to %d)", head->prev->seat);

    return 0;
}
