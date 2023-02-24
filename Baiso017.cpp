/* Nhap vao mot so tu 1 -> 7 va hien thi ten cua thu tuong ung trong 1 tuan
(Chu nhat -> Thu bay) */

#include "stdio.h"
int main () {
    int n;
    printf ("Nhap vao so tu 1 den 7: ");
    scanf ("%d", &n);

    switch (n) {
        case 1: 
            printf ("Chu nhat");
            break;
        case 2:
            printf ("\nThu 2");
            break;
        case 3:
            printf ("\nThu 3");
            break;
        case 4:
            printf ("\nThu 4");
            break;
        case 5:
            printf ("\nThu 5");
            break;
        case 6:
            printf ("\nThu 6");
            break;
        case 7:
            printf ("\nThu 7");
            break;    
        
        default:
            printf ("So n khong dung. ");
    }
}
