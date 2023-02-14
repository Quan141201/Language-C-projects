#include "stdio.h"
#include "math.h"

int main () {
    // Bien
    float xa, ya, xb, yb, xc, yc;
    float AB, BC, CA;
    float chu_vi, dien_tich, p; 

    // Nhap vao toa do 
    printf ("Nhap vao toa do diem A(xa, ya) = ");
    scanf ("%f%f", &xa, &ya);
    printf ("\nNhap vao toa do diem B(xb, yb) = ");
    scanf ("%f%f", &xb, &yb);
    printf ("\nNhap vao toa do diem C(xc, yc) = ");
    scanf ("%f%f", &xc, &yc);

    // Tinh khoang cach
    AB = sqrt(pow(xa-xb, 2) + pow(ya-ya, 2));
    BC = sqrt(pow(xb-xc, 2) + pow(yb-yc, 2));
    CA = sqrt(pow(xc-xa, 2) + pow(yc-ya, 2));

    // Kiem tra xem co tao thanh tam giac 
    if (((AB + BC) > CA) && ((AB + CA) > BC) && ((BC + CA) > AB)) {
        printf ("\nABC khong tao thanh tam giac");
        //Tam giac can 
        if ((AB == BC) || (AB == CA)|| (BC == CA)) {
            printf ("\nABC la tam giac can");
        } else {
            printf ("\nABC khong phai la tam giac can");
        }
        //Tinh chu vi
        chu_vi = AB + BC + CA;
        printf ("\nChu vi cua tam giac ABC = %.2f", chu_vi);
        //Tinh dien tich 
        p = chu_vi/2;
        dien_tich = sqrt(p*(p-AB)*(p-BC)*(p-CA));
        printf ("\nDien tich cua tam giac ABC = %.2f", dien_tich);
    } else {
        printf ("ABC Khong tao thanh tam giac");
    }
}
