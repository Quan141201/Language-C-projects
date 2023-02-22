#include "stdio.h"
int main () {
	int a, b, ucln;
	printf ("Nhap vao 2 so a, b: ");
	scanf ( "%d %d", &a, &b);
	if ( a==0 || b==0){
		ucln = a + b;
	} else {
		while (a!=b) {
			if (a>b) {
				a = a - b;
			} else {
				b = b - a;
			}	
		}
		ucln = a;
	}
	printf ("UCLN cua a va b = %d", ucln); 	
}
