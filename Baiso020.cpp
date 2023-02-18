#include "stdio.h"
int main () {
    /* in ra tu 0 - 9 ra man hinh 
    int i;
    for ( i = 0; i<=9 ; i++ ) {
        printf ("\n%d",i);
    } */
    
    /* nhap mot so n va in ra tu 0 den so do. Tinh tong cac so da in ra bang vong lap for
    int n;
    int total = 0;
	printf("Nhap n = ");
	scanf("%d", &n);
	int i;
	for(i=0;i<=n;i++){
		printf("\n%d", i);
        	total = total + i;
	}
    printf ("\nTotal = %d", total);*/
    
    int n, i;
    printf ("n = ");
    scanf ("\n%d", &n);

    for (i = 0; i <= n ; i++ ) {
        printf ("\n%d", i);
    }
}
