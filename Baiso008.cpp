// Toan tu dieu kien
// Kiem tra so chan le 

#include"stdio.h"" 
int main () {
	int a;
	printf ("Nhap vao a: ");
	scanf ("%d", &a);
	
	printf ("%d la so %s", a , (a%2==0)?"CHAN":"LE");
}
