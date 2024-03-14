#include <stdio.h>
#include <conio.h>

#define size 4

int front = -1;
int rear = -1;
int queue[size];

void display_CQ() {
    int i;
    printf("\n Circular Queue : ");
    if (front > rear) {
        for (i = front; i < size; i++) {
            printf("%d ->", queue[i]);
        }
        for (i = 0; i <= rear; i++)
            printf("%d -> ", queue[i]);
    } else {
        for (i = front; i <= rear; i++)
            printf("%d ->", queue[i]);
    }
    printf("[%d]", queue[front]);
    getch();
}

void insert_CQ(int item) {
    if ((front == 0 && rear == size - 1) || (front == rear + 1)) {
        printf("queue is full");
        return;
    } else if (rear == -1) {
        rear++;
        front++;
    } else if (rear == size - 1 && front > 0) {
        rear = 0;
    } else {
        rear++;
    }
    queue[rear] = item;
    display_CQ();
}

void delete_CQ() {
    if (front == -1) {
        printf("Queue is empty ");
    } else if (front == rear) {
        front = -1;
        rear = -1;
    } else {
        front++;
    }
    display_CQ();
}

int main() {
    clrscr();
    printf("\n * Insertion * : ");
    insert_CQ(61);
    insert_CQ(16);
    insert_CQ(8);
    insert_CQ(27);
    printf("\n * Deletion * : ");
    delete_CQ();
    delete_CQ();
    delete_CQ();
    delete_CQ();
    return 0;
}