// Phan biet truyen tham chieu, tham tri

/* Viet chuong trinh nhap vao hai so nguyen a, b. sau do viet 
hoan doi gia tri giua hai bien a, b va xuat ket qua ra man hinh 
*/

#include "stdio.h"
void swap_tham_tri (int a, int b) {
    int tam = a;
    a = b;
    b = tam; 
}

void swap_tham_chieu (int &a, int &b) {
    int tam = a;
    a = b;
    b = tam; 
}

int main () {
    int a, b;
    printf ("Nhap vao 2 so a, b: ");
    scanf ("%d%d", &a, &b);
    printf ("\nGia tri ban dau: a = %d va b = %d", a, b);
    swap_tham_tri (a, b);
    printf ("\nHoan doi truyen tham tri : a = %d va b = %d", a, b);
    swap_tham_chieu (a, b);
    printf ("\nHoan doi truyen tham chieu : a = %d va b = %d", a, b);

}
