// Phep tinh co ban trong LTC
#include "stdio.h"
int main () {
    float a, b;
    printf ("Nhap vao gia tri a: ");
    scanf ("%f", &a);
    printf ("\nNhap vao gia tri b: ");
    scanf ("%f", &b);

    //tong 
    float tong = a + b;
    printf ("\n%.2f + %.2f = %.2f", a, b, tong );
    
    //hieu
    float hieu = a - b;
    printf ("\n%.2f - %.2f = %.2f", a, b, hieu );
    
    //tich
    float tich = a * b;
    printf ("\n%.2f * %.2f = %.2f", a, b, tich );

    //thuong
    float thuong = a / b;
    printf ("\n%.2f / %.2f = %.2f", a, b, thuong );

    //chia lay du 
    int r = ((int) a) % ((int) b);
    printf ("\n%.2f chia lay du %.2f = %d", a, b, r );

    //tang gia tri them 1 don vi
    a++; 
    printf ("\na++ = %.2f", a);

    //giam gia tri di 1 don vi 
    b--;
    printf ("\nb-- = %.2f", b);
}
