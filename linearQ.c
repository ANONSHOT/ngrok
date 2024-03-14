#include <stdio.h>
#include <conio.h>

#define MAX 50

int queue_array[MAX];
int rear = -1;
int front = -1;

void display() {
    if (front == -1)
        printf("\nQueue is empty\n");
    else {
        printf("\nQueue is:\n");
        for (int i = front; i <= rear; i++)
            printf("%d ", queue_array[i]);
    }
    getch();
}

void insert_Q(int item) {
    if (rear == MAX - 1)
        printf("Queue Overflow\n");
    else {
        if (front == -1)
            front = 0;
        rear = rear + 1;
        queue_array[rear] = item;
        display();
    }
}

void delete_Q() {
    if (front == -1 || front > rear) {
        printf("\nQueue Underflow");
        return;
    } else {
        printf("\nElement deleted from queue is: %d", queue_array[front]);
        front = front + 1;
        display();
    }
}

void main() {
    clrscr();
    insert_Q(61);
    insert_Q(16);
    insert_Q(8);
    insert_Q(27);
    delete_Q();
    delete_Q();
    delete_Q();
    getch();
}