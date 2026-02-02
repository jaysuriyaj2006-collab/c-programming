#include <stdio.h>
#include <stdlib.h>

struct Node {
    int roll;
    struct Node *next;
};

int main() {
    struct Node *head = NULL, *temp = NULL, *newNode = NULL;
    int n, i, value;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        newNode = (struct Node *)malloc(sizeof(struct Node));
        
        printf("Enter roll number: ");
        scanf("%d", &value);
        
        newNode->roll = value;

        if (head == NULL) {
            head = newNode;
            newNode->next = head;   // circular link
            temp = head;
        } else {
            temp->next = newNode;
            newNode->next = head;   // point back to head
            temp = newNode;
        }
    }

    // Display circular linked list
    printf("\nAttendance List:\n");
    temp = head;
    do {
        printf("%d -> ", temp->roll);
        temp = temp->next;
    } while (temp != head);

    printf("(back to %d)", head->roll);

    return 0;
}
