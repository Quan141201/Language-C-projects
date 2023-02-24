/* Viet chuong trinh cho nhap he so cua pt bac 2 ax^2 + bx + c = 0.
Hay in ra man hinh nghiem cua pt da cho 
*/

/* Cach giai pt bac 2
http://cdmiennam.edu.vn/cach-giai-phuong-trinh-bac-2-va-cach-tinh-nham-nghiem.html
*/

// Cach tu lam
#include "stdio.h"
#include "math.h"

int main () 
{
    float a, b, c, delta, x1, x2, x3, x4;

    printf ("Nhap he so phuong trnh bac 2 ax^2 + bx + c = 0 ");
    printf ("\na = ");
    scanf ("%f", &a);
    printf ("\nb = ");
    scanf ("%f", &b);
    printf ("\nc = ");
    scanf ("%f", &c);

    delta = pow(b,2) - 4*a*c; 
    printf ("\ndelta = %.2f", delta );

    //delta > 0
    x1 = ((-b+sqrt(delta))/(2*a));
    x2 = ((-b-(sqrt(delta)))/(2*a));

    //delta = 0
    x3 = x4 = (-b/(2*a));

    
    if (delta > 0) {
        printf ("\nx1 = %.2f, \nx2 = %.2f", x1, x2  ); 
    } else if (delta == 0) {
        printf ("\nx1 = %.2f, \nx2 = %.2f", x3, x4);
    } else {
        printf ("\nPhuong trinh vo nghiem");
    }

}
