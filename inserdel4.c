#include<stdio.h>
#include<stdlib.h>

typedef struct node {
    int info;
    struct node *link;
} NODE;

NODE *header = NULL;

void display() {
    NODE *start = header;
    printf("\n * LIST *  :  ");
    while (start != NULL) {
        printf("%4d", start->info);
        start = start->link;
    }
}

void insert(int item) {
    NODE *newnode = (NODE *) malloc(sizeof(NODE));
    newnode->info = item;
    newnode->link = header;
    header = newnode;
    display();
}

void delete(int item) {
    NODE *curptr = header, *prevptr = NULL;

    while (curptr != NULL && curptr->info != item) {
        prevptr = curptr;
        curptr = curptr->link;
    }

    if (curptr == NULL) {
        printf("\n EMPTY LIST");
        return;
    }

    if (prevptr == NULL)
        header = curptr->link;
    else
        prevptr->link = curptr->link;

    free(curptr);
    display();
}

int main() {
    printf("\n Insertion :");
    insert(61);
    insert(16);
    insert(8);
    insert(27);

    printf("\n Deletion :");
    delete(8);
    delete(61);
    delete(27);

    return 0;
}