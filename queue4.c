#include <stdio.h>
#include <stdlib.h>

struct Node {
    int orderID;
    struct Node *next;
};

struct Node *front = NULL;
struct Node *rear = NULL;

/* Place a new order */
void enqueue(int orderID) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->orderID = orderID;
    newNode->next = NULL;

    if (rear == NULL) {
        front = rear = newNode;
    } else {
        rear->next = newNode;
        rear = newNode;
    }
    printf("Order %d placed successfully.\n", orderID);
}

/* Process an order */
void dequeue() {
    if (front == NULL) {
        printf("No orders to process.\n");
        return;
    }
    struct Node *temp = front;
    printf("Order %d processed and dispatched.\n", front->orderID);
    front = front->next;

    if (front == NULL)
        rear = NULL;

    free(temp);
}

/* Display next order */
void frontOrder() {
    if (front == NULL)
        printf("No pending orders.\n");
    else
        printf("Next order to process: %d\n", front->orderID);
}

/* Check if queue is empty */
void isEmpty() {
    if (front == NULL)
        printf("All orders are completed.\n");
    else
        printf("Pending orders are available.\n");
}

/* Count pending orders */
void size() {
    int count = 0;
    struct Node *temp = front;

    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    printf("Total pending orders: %d\n", count);
}

int main() {
    enqueue(101);  // O101
    enqueue(102);  // O102
    enqueue(103);  // O103

    frontOrder();
    size();

    dequeue();
    frontOrder();
    size();

    isEmpty();

    return 0;
}
