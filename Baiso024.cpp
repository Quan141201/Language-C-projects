// Vong lap do while
/* Viet chuong trinh hien thi 1 menu sau day len man hinh:
   - Nhap so 0 de thoat
   - Nhap so bat ky khac 0 de tiep tuc
*/

#include "stdio.h" 
int main () {
	int c;
	
	do {
		printf ("\n------MENU-------");
		printf ("\nNhap vao  0 de thoat ");
		printf ("\nNhap vao so bat ky khac 0 de tiep tuc ");
		scanf ("%d",&c);
	} while (c != 0); 
}
