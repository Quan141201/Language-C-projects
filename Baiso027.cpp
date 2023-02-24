#include "stdio.h" 
/* Dieu kien cua SNT 
    1. > 1
    2. chi chia het cho no va 1
*/

// tao ham kiem tra so nguyen to 
int kiem_tra_SNT (int x) {
    // xet so do co lon hon 1 khong
    if (x <=1) return 0;

    // kiem tra so do chia het cho nhieu so hay chi moi no va 1
    for (int i = 2; i <= x-1; i++) {
        if (x%i == 0) 
            return 0;
    }
    return 1;
}

int main () {
    //nhap lieu
    int n;
    printf ("Nhap n = ");
    scanf ("%d", &n);

    // goi ham de xu ly
    int kt = kiem_tra_SNT (n);

    // xu ly, xuat ket qua 
    if (kt==1) {
        printf ("La so nguyen to");
    } else {
        printf ("Khong phai la so nguyen to");
    }
}