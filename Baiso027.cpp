#include "stdio.h" 

// tao ham kiem tra so nguyen to 
int kiem_tra_SNT (int x) {
    // xet so do co lon hon 1 khong
    if (x <=1) return 0;

    /* Kiem tra so do co chi chia het 1 va chinh no hay chia het cho nhieu so khac. 
    Neu chia het so khac ngoai 1 va chinh no thi khong phai SNT*/
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