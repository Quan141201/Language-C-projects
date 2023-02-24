// Lenh goto, lenh continue 

/* Viet chuong trinh nhap vao so n (n>0) va xuat ra so le tu 1 den n, trong do
co su dung lenh goto va continue
*/

#include "stdio.h"
int main () {
	int n;
	
	NHAP:
	printf ("Nhap n = ");
	scanf ("%d", &n);
	if (n<=0) goto NHAP;
	
	printf ("\nDay so le: ");
	for (int i = 1; i<=n ;i++) {
		if (i%2 == 0 ) continue;
		printf ("\n%d", i); 
	}
}
