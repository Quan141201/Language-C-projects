// Cach nhap du lieu 

#include "stdio.h"
int main () {
	char c;
	int x;
	float y;
	float x1, x2, x3;
	
	// Nhap vao ky tu
	printf ("Nhap vao ky tu: ");
	scanf ("%c", &c);
	printf ("\nKy tu vua nhap la: %c", c);
	
	// Nhap so nguyen
	printf ("\nNhap vao so nguyen: ");
	scanf ("%d", &x);
	printf ("\nSo nguyen vua nhap la: %d", x);
	
	// Nhap vao so thuc
	printf ("\nNhap vao so thuc: ");
	scanf ("%f", &y);
	printf ("\nSo thuc vua nhap la: %.2f", y);
	
	// Nhap nhieu du lieu cung mot hang
	printf ("\nNhap vao gia tri cua x1, x2, x3: ");
	scanf ("%f%f%f", &x1,&x2,&x3);
	printf ("\nx1 = %.2f,x2 = %.2f, x3 = %.2f", x1, x2, x3);
	
}
