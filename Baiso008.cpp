// Toán tử điều kiện. Bài tập kiểm tra số chẳn số lẻ 
#include"stdio.h"" 
int main () {
	int a;
	printf ("Nhap vao a: ");
	scanf ("%d", &a);
	
	printf ("%d la so %s", a , (a%2==0)?"CHAN":"LE");
}
