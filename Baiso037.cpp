/* Nhap vao mang 1 chieu gom n phan tu:
Tinh trung binh cong cac phan tu trong mang;
Tinh trung binhf cong cac so duong trong mang;
*/

#include "stdio.h"
float trung_binh_cong (int y [], int n) {
	int tong = 0;
	for (int i = 0; i < n; i++) {
		tong += y[i];
	}
	return (float)tong/n; 
}

float trung_binh_cong_so_duong (int y [], int n) {
	int tong = 0;
	int so_luong_so_duong = 0;
	for (int i = 0; i < n; i++) {
		if (y[i] >= 0) {
			tong += y[i];
			so_luong_so_duong ++;
		}
	}
	return so_luong_so_duong > 0 ? (float)tong/so_luong_so_duong : -1;
}

int main () {
	int a [100];
	int n; 
	
	do {
		printf ("Nhap vao so phan tu n ( n < 0 <= 100) cua mang: ");
		scanf ("%d", &n);
	} while ( n < 1 || n >= 100);
	
	for (int i = 0; i < n; i++) {
		printf ("\na [%d] = ", i);
		scanf ("%d", &a[i]);
	}
	
	printf ("Trung binh cong cua mang = %.2f", trung_binh_cong(a, n));
	
	float tbcsd = trung_binh_cong_so_duong (a,n);
	if (tbcsd > 0) {
		printf ("\nTrung binh cong so duong cua mang = %.2f", tbcsd);
	} else {
		printf ("\nMang khong co so duong");
	}
}
