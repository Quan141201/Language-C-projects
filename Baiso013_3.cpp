// Nhap so n, xuat ra mna hinh na la so chan hay so le
// Dung if , else if 

#include "stdio.h"
int main(){
  int n;
	printf("Nhao vao n=");
	scanf("%d", &n);
	
	if (n%2==0){
		printf("\nSo nhap vao la so chan");
	}else if(n%2==1){
		printf("\nSo nhap vao la so le");
	}		
}
