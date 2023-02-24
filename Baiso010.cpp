// Giai phuong trinh bac nhat ax+b = 0 voi a != 0

/* Phuong trinh bac nhat ax + b = 0 voi a khac 0
 x = -b/a
*/

#include "stdio.h"
int main () {
    // Khai bao bien
    float a, b, x;

    // Nhap du lieu 
    printf ("Nhap he so cua phuong trinh ax + b = 0");
    printf ("\na = ");
    scanf ("%f", &a);
    printf ("\nb = ");
    scanf ("%f", &b);

    // Xu ly du lieu 
    x = -b/a;

    // Xuat du lieu 
    printf ("x = %.2f", x);
}
