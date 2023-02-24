// Tinh giai thua cua so n(n>=0), n duoc nhap tu ban phim

/* Giai thua 
n! = 1x2x3x...x n
*/

#include "stdio.h" 
int main () {
	int n, giaithua;
	
	do {
		printf ("Nhap vao so n (n>=0) ");
		scanf ("%d", &n);
	}while (n < 0);
	
	giaithua = 1;
	for (int i = 1; i<=n; i++) {
		giaithua = giaithua *i;
	}
	printf ("Giai thua = %d", giaithua);
}
