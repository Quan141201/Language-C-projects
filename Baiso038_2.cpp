/* Trong mang 1 chieu cac so nguyen: 
Hay liet ke cac phan tu chan va chia het cho 3.
Hay liet ke cac so nguyen to. 
*/

#include "stdio.h"
#include "math.h"

int chan_chia_het_3 (int x) {
	return (x % 2 == 0 && x % 3 == 0);
}
 
int so_nguyen_to (int x) {
	if (x < 1) 
		return 0;
	for (int i = 2; i <= sqrt(x) ; i++) {
		if (x % i == 0) 
		return 0;
	}
	return 1;
}

int main () {
	int a[100];
	int n;
	
	// Nhap so phan tu n 
	do {
		printf ("Nhap vao so phan tu n (0 < n <= 100) = ");
		scanf ("%d", &n);
	} while (n < 1 || n > 100);
	
	// Nhap mang 
	for (int i = 0; i < n; i++) {
		printf ("a[%d] = ", i);
		scanf ("%d", &a[i]);
	}
	
	// Xuat ket qua 
	printf ("\nPhan tu chan chia het cho 3 la: ");
	for (int i = 0; i < n; i++) {
		if (chan_chia_het_3 (a[i])) {
			printf ("\n%d", a[i]);
		}
	}	

	printf ("\nPhan tu la so nguyen to la: ");
	for (int i = 0; i < n; i++) {
		if (so_nguyen_to (a[i])) {
			printf ("\n%d", a[i]);
		}
	}
}
