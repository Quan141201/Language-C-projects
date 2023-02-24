// Nhap n tu ban phim (n>0), tinh tong cac con so tu 1 den n va xuat ra man hinh

#include "stdio.h"
int main () {
	/* in so tu 0 - 10 va tinh tong chung 
	int n = 0;
	int total = 0;
	while (n <= 9 ) {
		n++;
		printf ("\n n = %d", n);
		total = n + total;
	}
	printf ("\nTotal = %d", total );*/
	

	// /* nhap mot so n va in ra tu 0 den so do. Tinh tong cac so da in ra bang vong lap while
	int n;
	int i = 0;
	int total = 0;
	printf ("Nhap n = "); 
	scanf ("%d", &n);

	while (i <= n) {
		printf ("\n%d", i);
		total = total + i;
		i++;
	}
	printf ("\nTotal = %d", total ); 
}
