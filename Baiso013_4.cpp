#include "stdio.h"
int main () {
	int n;
	printf ("Nhap vao n = ");
	scanf ("%d", &n);
	
	if (n % 2 == 0) {
		printf ("n la so chan");
	} else if (n%2 == 1) {
		printf ("n la so le");
	}
}
