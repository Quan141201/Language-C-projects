// Tim uoc so chung lon nhat giua 2 so 

/*
uoc: so tu nhien a chia het cho b 
uoc chung: so tu nhien vua chia het cho a vua chia het cho b
uoc chung lon nhat: so lon nhat trong tap hop uoc chung cua a va b 
*/

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
