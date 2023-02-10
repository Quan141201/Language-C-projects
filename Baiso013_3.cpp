#include "stdio.h"
int main () {
	int h;
	printf ("Nhap vao gio ");
	scanf ("%d", &h);
	
	if ( h>= 19 and h <= 24){
		printf ("Buoi toi");
	} else if ( h >= 12 and h <= 19) {
		printf ("Buoi chieu");
	} else {
		printf ("Buoi sang");
	}
}
