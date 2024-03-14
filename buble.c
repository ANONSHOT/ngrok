#include<stdio.h>
#include<conio.h>

void BUBBLE_SORT(int a[], int n) {
    int pass, temp, j, i;
    for(pass = 1; pass <= n - 1; pass++) {
        for(j = 0; j <= n - pass - 1; j++) {
            if(a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
        printf("\n Array after %d pass --->", pass);
        for(i = 0; i < n; i++)
            printf("%3d", a[i]);
    }
}

void main() {
    int a[7] = {5, 3, 1, 6, 0, 2, 4};
    int n = 7;
    clrscr();
    printf("\n Input arrays : 5 3 1 6 0 2 4");
    BUBBLE_SORT(a, n);
    getch();
}