/* Viet chuong trinh cho phep nhap cac he so cua pt bac nhat mot an ax+b = 0.
Hay in ra man hinh nghiem cua pt da cho 
*/

/* Phuong trinh bac nhat ax+b = 0 
		Neu a != 0 -> x = -b/a
		Neu a == 0, b == 0 -> vo so nghiem
		Neu a == 0, b!= 0 -> vo nghiem
*/

#include "stdio.h"
int main () 
{	
	float a, b, x = 0;
	printf ("Giai phuong trinh bac nhat ax + b = 0");
	
	printf ("\nNhap vao he so a = ");	
	scanf ("%f", &a);
	printf ("\nNhap vao he so b = ");	
	scanf ("%f", &b);
	
	x = -b/a;
	if (a != 0) {
		printf ("Phuong trinh co nghiem x = -b/a = %f", x);
	} else {
		if (b == 0) {
			printf ("Phuong trinh co vo so nghiem");
		} else {
			printf ("Phuong trinh vo nghiem");
		}
	}
}
