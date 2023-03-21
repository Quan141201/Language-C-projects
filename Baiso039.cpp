// Tim gia tri lon nhat va nho nhat trong mang 1 chieu

#include "stdio.h"

int tim_min (int x[], int n){
	int min = x[0];
	for (int i = 1; i < n; i++) {
		// 5 12 4 5 6 
		if (min > x[i]) {
			min = x[i];
		}
	}
	return min;	
}

int tim_max (int x[], int n) {
	int max =  x[0];
	for (int i = 1; i < n; i++) {
		// 5 12 4 5 6
		if (max < x[i]) {
			max = x[i];
		}
	}
	return max;
}

int main () {
	int a[100];
	int n;
	
	// Nhap so phan tu 
	do {
		printf ("Nhap so phan tu n (0 < n <= 100) = ");
		scanf ("%d", &n);
	} while (n < 1 || n > 100);
	
	// Nhap mang 
	for (int i = 0; i < n; i++) {
		printf ("a[%d] = ", i);
		scanf ("%d", &a[i]);
	}
	
	// print ket qua
	printf ("Max = %d", tim_max(a, n));
	printf ("\nMin = %d", tim_min(a, n));
	
}
