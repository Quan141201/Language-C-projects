/* Nhap vao mang 1 chieu gom n phan tu:
Tinh trung binh cong cac phan tu trong mang;
Tinh trung binh cong cac so duong trong mang;
*/

#include "stdio.h"
// Ham tinh trung binh cong 
float trung_binh_cong (int x[], int n) {
	int tong = 0;
	for (int i = 0; i < n; i++) {
		tong += x[i];
	}
	return (float) tong/n; 
}

// Ham tinh trung binh cong so duong cua so duong 
float trung_binh_cong_so_duong (int x[], int n) {
	int tong = 0;
	int so_duong = 0;
	for (int i = 0; i < n; i++) {
		if (x[i] >= 0) {
			tong += x[i];
			so_duong ++;
		}
	}
	return so_duong > 0? (float) tong/ so_duong : -1; 
}

int main () {
	// Khai bao so phan tu n + mang 
	int a[100], n;
	
	// Nhap so phan tu 1 - 100
	do {
		printf ("Nhap vao so phan tu n (0 < n <= 100) cua mang: ");
		scanf ("%d", &n);
	} while (n < 1 || n > 100);
	
	// Nhap mang 
	for (int i = 0; i < n; i++) {
		printf ("a[%d] = ", i);
		scanf ("%d", &a[i]);
	}
	
	// Goi ham tinh trung binh cong
	printf ("Trung binh cong cua ham = %.2f", trung_binh_cong (a, n));
	
	// Goi ham tinh trung binh cong so duong 
	float tbcsd = trung_binh_cong_so_duong (a, n);
	printf ("\nTrung binh cong so duong cua ham = %.2f", tbcsd);
}
