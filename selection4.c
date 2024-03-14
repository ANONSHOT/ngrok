#include<stdio.h>
#include<conio.h>

int MIN(int a[], int k, int n) {
    int loc, j, min;
    min = a[k];
    loc = k;
    for(j = k + 1; j < n; j++) {
        if(min > a[j]) {
            min = a[j];
            loc = j;
        }
    }
    return(loc);
}

void SELECTION_SORT(int a[], int n) {
    int i, loc, temp;
    for(int k = 0; k < n; k++) {
        loc = MIN(a, k, n);
        temp = a[k];
        a[k] = a[loc];
        a[loc] = temp;
        printf("\n\nSorted arrays after %d pass:-->", k);
        for(i = 0; i < n; i++)
            printf("%3d", a[i]);
    }
    printf("\n\n Sorted arrays using Selection sort in Descending Order\n");
    for(i = n - 1; i >= 0; i--) {
        printf("%3d", a[i]);
    }
}

void main() {
    int a[8] = {75, 8, 1, 16, 48, 3, 7, 0};
    int n = 8;
    clrscr();
    printf("\n Input arrays : 75, 8, 1, 16, 48, 3, 7, 0");
    SELECTION_SORT(a, n);
    getch();
}