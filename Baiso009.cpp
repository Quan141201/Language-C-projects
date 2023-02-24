/* Nhap 2 so nguyen a, b thong qua console.
Hay xuat ra man hinh gia tri nho nhat va gia tri lon nhat giua 2 so a,b 
*/

#include "stdio.h"
int main () {
	//Khai bao bien a, b
	int a, b, min, max;
	
	//Nhap, xuat a, b
	printf ("Nhap vao a = ");
	scanf ("%d", &a);
	printf ("\nNhap vao b = ");
	scanf ("%d", &b);	
	
	//Xu ly du lieu 
	min = (a < b) ? a : b;
	max = (a > b) ? a : b;
	
	//Xuat ket qua ra man hinh
	printf ("\nGia tri nho nhat la %d", min);
	printf ("\nGia tri lon nhat la %d", max);
}
