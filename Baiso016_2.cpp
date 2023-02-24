/* Viet chuong trinh cho nhap he so cua pt bac 2 ax^2 + bx + c = 0.
Hay in ra man hinh nghiem cua pt da cho */

// Cach thay chua 

#include "stdio.h"
#include "math.h"

int main () 
{
    float a, b, c, delta, x1, x2;

    printf ("Phuong trnh bac 2 ax^2 + bx + c = 0 ");
    printf ("\nNhap vao he so a, b, c ");
    scanf ("%f%f%f", &a, &b, &c);

    delta = pow(b,2) - 4*a*c; 
    printf ("\ndelta = %.2f", delta );
     
    if (delta > 0) {
        x1 = ((-b+sqrt(delta))/(2*a));
        x2 = ((-b-(sqrt(delta)))/(2*a));
        printf ("\nx1 = %.2f, \nx2 = %.2f", x1, x2  ); 
    } else if (delta == 0) {
        x1 = x2 = (-b/(2*a));
        printf ("\nx1 = %.2f, \nx2 = %.2f", x1, x2);
    } else {
        printf ("\nPhuong trinh vo nghiem");
    }

}
