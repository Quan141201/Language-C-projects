/* Hay liet ke cac phan tu chan va chia het cho 3 
trong mang 1 chieu cac so nguyen
*/

#include "stdio.h"

void chan_chia_het_3 (int a[], int n) {
	for (int i = 0; i < n; i++) {
		if (a[i] % 2 == 0 && a[i] %3 == 0) {
			printf ("\n%d", a[i]);
		} 
	} 
}	

int main () {
	int a[100];
	int n;
	
	// Nhap so phan tu mang
	do {
		printf ("Enter so phan tu n (0 < n <= 100) = ");
		scanf ("%d", &n);
	} while (n < 1 || n > 100);
	
	// Nhap mang 
	for (int i = 0; i < n; i++) {
		printf ("a[%i] = %", i);
		scanf ("%d", &a[i]);
	}
	
	// Xuat ket qua
	printf ("\nPhan tu chan chia het cho 3 la: ");
	chan_chia_het_3 (a, n);
}

