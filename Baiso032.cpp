// Tinh giai thua cua so n bang ham de quy
// n! = 1x2x3x...x n

#include "stdio.h"
int giai_thua (int n) {
    if (n == 0 || n == 1)
        return 1; 
    else 
        return n * giai_thua (n-1);
}

int main () {
    int n, gt;
    do {
        printf ("Nhap n = ");
        scanf ("%d", &n);
    } while (n < 0); 
    gt = giai_thua (n);
    printf ("%d! = %d", n, gt);
}
