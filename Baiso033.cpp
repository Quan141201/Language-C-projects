/* Nhap vao so n (n >=0), chuyen doi so n tu he thap phan 
sang he nhi phan va xuat ra man hinh 
*/

// https://www.wikihow.vn/%C4%90%E1%BB%95i-t%E1%BB%AB-S%E1%BB%91-Th%E1%BA%ADp-ph%C3%A2n-sang-Nh%E1%BB%8B-ph%C3%A2n

#include "stdio.h"
void nhi_phan (int x) {
    if (x == 0)
        return;
    else {
        int r = x % 2;
        nhi_phan (x/2);
        printf ("%d", r);  
    }
}

int main () {
    int n;
    do {
        printf ("Nhap n = ");
        scanf ("%d", &n);
    } while (n < 0);
    nhi_phan (n);
}