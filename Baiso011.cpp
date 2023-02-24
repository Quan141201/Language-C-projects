// Ep kieu du lieu 

#include "stdio.h"
int main () {
	int a, b;
	printf ("Nhap vao a = ");
	scanf ("%d", &a);
	printf ("Nhap vao b = ");
	scanf ("%d", &b);
	
	float ket_qua = (float)a/b;
	int ket_qua2 = (int)a/b;
	printf ("%d / %d = %.2f", a, b, ket_qua);
	printf ("\nKet qua 2 = %d", ket_qua2);
}
