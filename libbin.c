#include<stdio.h>
#include<conio.h>

void LINEAR_SEARCH(int a[10], int n, int key) {
    int i, found = 0;
    for (i = 0; i < n; i++) {
        if (key == a[i]) {
            printf("\n %d found at a[%d]", key, i);
            found = 1;
            break;
        }
    }
    if (found == 0)
        printf("\n Element not found in the list");
}

void BINARY_SEARCH(int a[10], int key, int first, int last) {
    int mid;
    mid = (first + last) / 2;
    if (key < a[mid])
        BINARY_SEARCH(a, key, first, mid - 1);
    else if (key > a[mid])
        BINARY_SEARCH(a, key, mid + 1, last);
    else
        printf("\n %d found at a[%d]", key, mid);
}

void DISPLAY_ARRAY(int a[10], int n) {
    int i;
    printf("\n Given array : ");
    for (i = 0; i < n; i++) {
        printf("%3d", a[i]);
    }
}

void main() {
    int a[8] = {4, 7, 3, 2, 1, 7, 9, 0};
    int sa[8] = {0, 1, 2, 3, 4, 7, 7, 9};
    int n = 8;
    int key = 7;
    int choice;
    clrscr();
    printf("\n 1. Linear Search");
    printf("\n 2. Binary Search");
    printf("\n Enter your choice :");
    scanf("%d", &choice);
    switch (choice) {
        case 1: {
            DISPLAY_ARRAY(a, n);
            LINEAR_SEARCH(a, n, key);
            break;
        }
        case 2: {
            DISPLAY_ARRAY(sa, n);
            BINARY_SEARCH(sa, key, 0, n - 1);
            break;
        }
        default:
            printf("\n Invalid choice ");
    }
    getch();
}