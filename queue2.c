#include <stdio.h>
#define MAX 5

int queue[MAX];
int front = -1, rear = -1;

/* Add a print job */
void enqueue(int jobID) {
    if (rear == MAX - 1) {
        printf("Printer queue is full!\n");
        return;
    }
    if (front == -1)
        front = 0;

    rear++;
    queue[rear] = jobID;
    printf("Print job %d added to queue.\n", jobID);
}

/* Print and remove a job */
void dequeue() {
    if (front == -1 || front > rear) {
        printf("No print jobs available.\n");
        return;
    }
    printf("Printing job %d...\n", queue[front]);
    front++;
}

/* Show next job */
void frontJob() {
    if (front == -1 || front > rear) {
        printf("No pending print jobs.\n");
    } else {
        printf("Next job to print: %d\n", queue[front]);
    }
}

/* Check if queue is empty */
void isEmpty() {
    if (front == -1 || front > rear)
        printf("Printer queue is empty.\n");
    else
        printf("Printer queue is not empty.\n");
}

/* Number of pending jobs */
void size() {
    if (front == -1 || front > rear)
        printf("Pending jobs: 0\n");
    else
        printf("Pending jobs: %d\n", rear - front + 1);
}

int main() {
    enqueue(101);
    enqueue(102);
    enqueue(103);

    frontJob();
    size();

    dequeue();
    frontJob();
    size();

    isEmpty();

    return 0;
}
