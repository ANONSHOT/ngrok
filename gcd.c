#include<stdio.h>
#include<conio.h>

int GCD(int m, int n) {
    if(n == 0) {
        return(m);
    } else if(n > m) {
        return(GCD(n, m));
    } else {
        return(GCD(n, m % n));
    }
}

void main() {
    int gcd12, gcd3;
    clrscr();
    
    gcd12 = GCD(4, 6);
    printf("\n GCD between 4 & 6 = %d", gcd12);
    
    gcd3 = GCD(gcd12, 8);
    printf("\n GCD between 4, 6 & 8 = %d", gcd3);
    
    getch();
}