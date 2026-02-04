#include <stdio.h>
#include <stdlib.h>

struct Node {
    int patientID;
    struct Node *next;
};

struct Node *front = NULL;
struct Node *rear = NULL;

/* Register a new patient */
void enqueue(int patientID) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->patientID = patientID;
    newNode->next = NULL;

    if (rear == NULL) {
        front = rear = newNode;
    } else {
        rear->next = newNode;
        rear = newNode;
    }
    printf("Patient %d registered.\n", patientID);
}

/* Send patient to doctor */
void dequeue() {
    if (front == NULL) {
        printf("No patients waiting.\n");
        return;
    }
    struct Node *temp = front;
    printf("Patient %d is being attended.\n", front->patientID);
    front = front->next;

    if (front == NULL)
        rear = NULL;

    free(temp);
}

/* Display current patient */
void frontPatient() {
    if (front == NULL)
        printf("No patient is being attended.\n");
    else
        printf("Current patient: %d\n", front->patientID);
}

/* Check if queue is empty */
void isEmpty() {
    if (front == NULL)
        printf("No patients in queue.\n");
    else
        printf("Patients are waiting.\n");
}

/* Count total patients */
void size() {
    int count = 0;
    struct Node *temp = front;

    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    printf("Total patients waiting: %d\n", count);
}

int main() {
    enqueue(1);  // P1
    enqueue(2);  // P2
    enqueue(3);  // P3

    frontPatient();
    size();

    dequeue();
    frontPatient();
    size();

    isEmpty();

    return 0;
}
