// Nhap vao so n, xuat ra gia tri Fibonacci F(n)

/* Day so Fibonacci: la day vo han cac so tu nhien bat
dau bamg hai phan tu 0 hoac 1, va 1. Cac phan tu sau 
do duoc thiet lap theo quy tac moi phan tu luon bang 
tong 2 phan tu truoc no 
*/

/*
Cong thuc truy hoi cua day Fibonacci
F(0) = 0 
F(1) = 1
F(n) = F(n-1) + F(n-2) 
*/

#include "stdio.h"
int fibonnaci (int x) {
    if (x == 0)
        return 0;
    else if (x == 1)
        return 1;
    else 
        return fibonnaci (x-1) + fibonnaci (x-2);
}

int main () {
    int n;
    do {
        printf ("Nhap so n = ");
        scanf ("%d", &n);
    } while (n < 0);
    printf ("Fibonnaci (%d) = %d", n, fibonnaci (n));

}