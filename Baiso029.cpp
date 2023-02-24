/* Viet chuong trinh su dung ham de nhap vao so n (n>1),
xuat ra tat car so chinh phuong nho hon hoac bang n
*/

/* So chinh phuong x
 so x = binh phuong khai can cua x 
*/

#include "stdio.h"
#include "math.h"

// tao ham de kt so chinh phuong
int kiem_tra_SCP (int x) {
    int kc = sqrt (x);
    if (pow (kc,2)== x)
        return 1;
    else 
        return 0;
}

int main () {
    // Nhap so den khi n > 1
    int n;
    do {
    printf ("Nhap n = ");
    scanf ("%d", &n);
    } while (n<=1);

    // Goi ham de tim ra tat ca so chinh phuong <=n
    printf ("Cac so chinh phuong nho hon hoac bang n la: ");
    for (int i=2; i<=n; i++) {
        int cp = kiem_tra_SCP (i);
        if (cp == 1) {
            printf ("\n%d",i );
        }
    }
}
