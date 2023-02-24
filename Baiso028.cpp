/* Viet chuong trinh su dung ham de nhap vao so n (n>1), xuat ra tat ca 
cac so nguyen to nho hon hoac bang n. 
*/

/* Dieu kien cua SNT 
    1. > 1
    2. chi chia het cho no va 1
*/

#include "stdio.h" 

// Tao ham kiem tra SNT 
int kiem_tra_SNT (int x) {
    // kiem tra so > 1 hay khong 
    if (x<=1) return 0;
    
    // kiem tra so do chia het cho nhieu so hay chi moi no va 1
    for (int i = 2; i<= x-1; i++) {
        if (x%i==0) return 0;
    }
    return 1;
}

int main () {
    // Nhap so n den khi n > 1
    int n;
    do { 
        printf ("Nhap n = ");
        scanf ("%d", &n);
    } while (n<=1);

    // Goi ham de xem co so nguyen to nho hon hoac bang n khong
    printf ("So nguyen to nho hon hoac bang n la: "); 
    for (int k = 2; k <= n; k++) {
        int kt = kiem_tra_SNT (k);
        if( kt == 1) {
            printf ("\n%d", k);
        } 
    }
}
