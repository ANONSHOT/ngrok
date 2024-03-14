#include<stdio.h>
#include<conio.h>
#define MAX 5

int STACK[MAX];
int TOP = -1;

void DISPLAY();

void PUSH(int item) {
    if(TOP == MAX - 1) {
        printf("\n STACK Overflow");
    } else {
        printf("\n  PUSH %d ", item);
        TOP = TOP + 1;
        STACK[TOP] = item;
        DISPLAY();
    }
}

void POP() {
    if(TOP == -1) {
        printf("\n STACK Underflow");
        getch();
    } else {
        printf("\n  %d POPPED ", STACK[TOP]);
        TOP = TOP - 1;
        DISPLAY();
    }
}

void DISPLAY() {
    int i;
    for(i = TOP; i >= 0; i--) {
        printf("\n STACK[%d]=%d", i, STACK[i]);
    }
    getch();
}

void main() {
    int i;
    clrscr();
    printf("\n PUSH 5,9,34,17,32\n");
    PUSH(5);
    PUSH(9);
    PUSH(34);
    PUSH(17);
    PUSH(32);
    printf("\n POP 3 elements\n");
    POP();
    POP();
    POP();
}