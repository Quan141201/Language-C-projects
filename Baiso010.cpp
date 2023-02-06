#include "stdio.h"
int main () {
    // Khai bao bien
    // Phuong trinh bac nhat ax + b = 0
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