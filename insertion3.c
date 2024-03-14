#include<stdio.h>
#include<conio.h>

// Insertion sort
void INSERTION_SORT(int a[], int n) {
    int pass, k, temp, i, j;
    for(pass = 1; pass < n; pass++) {
        k = a[pass];
        for(j = pass - 1; j >= 0 && k < a[j]; j--) {
            a[j + 1] = a[j];
        }
        a[j + 1] = k;
        printf("\n\n Sorted arrays after %d pass -->", pass);
        for(i = 0; i < n; i++)
            printf("%3d", a[i]);
    }
    printf("\n\n Sorted arrays using Insertion sort in Descending Order\n");
    for(i = n - 1; i >= 0; i--) {
        printf("%3d", a[i]);
    }
}

void main() {
    int a[8] = {75, 8, 1, 16, 48, 3, 7, 0};
    int n = 8;
    clrscr();
    printf("\n Input arrays : 75, 8, 1, 16, 48, 3, 7, 0");
    INSERTION_SORT(a, n);
    getch();
}