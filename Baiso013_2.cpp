// Nhap vao 1 con so va xuat ra no la so chan hay so le 
// Dung if, else

#include "stdio.h"
int main () {
	int n;
	printf ("Nhap vao n = ");
	scanf ("%d", &n);
	
	if (n % 2 == 0) {
		printf ("n la so chan");
	} else {
		printf ("n la so le");
	}
}
