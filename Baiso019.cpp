#include "stdio.h"
#include "math.h"

int main () {
    // Bien
    float ax ,bx ,cx ,ay ,by ,cy ;
    float AB, BC, CA, p, chu_vi, dien_tich;

    // Nhap toa do 3 dinh A, B, C
    printf ("Nhap toa do diem A(ax,ay) = ");
    scanf ( "%f%f", &ax, &ay);
    printf ("Nhap toa do diem B(bx,by) = ");
    scanf ( "%f%f", &bx, &by);
    printf ("Nhap toa do diem C(cx,cy) = ");
    scanf ( "%f%f", &cx, &cy);

    // Tinh do dai doan thang AB, BC, CA 
    AB = sqrt((pow((bx-ax),2)) + (pow((by-ay),2))); 
    printf ("\nAB = %.2f", AB); 
    BC = sqrt((pow((cx-bx),2)) + (pow((cy-by),2)));
    printf ("\nBC = %.2f", BC);  
    CA = sqrt((pow((ax-cx),2)) + (pow((ay-cy),2)));
    printf ("\nCA = %.2f", CA);  

    // Kiem tra A, B, C co tao thanh tam giac khong
    if (((AB + BC) > CA) && ((AB +CA) > BC) && ((BC + CA) > AB)) {
        printf ("\nA, B, C tao thanh tam giac");

        // Kiem tra tam giac ABC co can khong
        if ((AB == BC) || (AB == CA) || (BC == CA)) {
            printf ("\nABC la tam giac can");
        }
        // Tinh chu vi
        chu_vi = AB + BC + CA;
        printf ("\nChu vi tam giac ABC = %.2f", chu_vi);
        // Tinh dien tich
        p = chu_vi/2;
        //Dung heron tinh dien tich 
        dien_tich = sqrt (p*(p-AB)*(p-BC)*(p-CA));
        printf ("\nDien tich tam giac ABC = %.2f", dien_tich);
    }
    // A, B, C khong tao thanh tam giac
    else {
        printf ("\nA, B, C khong tao thanh tam giac");
    }
}
