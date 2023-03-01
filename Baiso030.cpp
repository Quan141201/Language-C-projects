/* Viet chuong chinh nhap ngay, thang, nam
a. Hay cho biet thang do co bao nhieu ngay 
b. Tinh xem ngay truoc do la ngay thu bao nhieu
trong nam
- vd 14/5/2020. tinh so ngay tu thang 1 - 4 roi cong voi 14 
 31+ 29+ 31 +30 + 14 = 135. -> la ngay so 135 trong nam  
 
c. Tim ngay truoc ngay vua nhap (ngay, thang, nam)
d. Tim ngay ke ngay vua nhap (ngay, thang, nam)
*/

#include "stdio.h"
 // a. 
    int so_ngay_cua_thang(int thang, int nam ) {
        switch (thang) {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
                return 31;
                break;

            case 4:
            case 6:
            case 9:
            case 11:
                return 30;
                break;
        
            case 2:
                return ((nam % 400 == 0) || ((nam % 4 == 0) && (nam %100 !=0)))?29:28;
        
            default:
                return -1;
    }
}

// b.
int ngay_trong_nam (int ngay, int thang, int nam) {
    int ntn = 0;
    for (int i = 1; i <thang; i++ ) (
        ntn +=  so_ngay_cua_thang (i, nam)
    );
    ntn += ngay;
    return ntn;
} 

// c.
void in_ngay_truoc_do (int ngay, int thang, int nam ) {
    if (ngay == 1){
        if (thang == 1){
            ngay = 31;
            thang = 12;
            nam --; 
        } else {
            thang --;
            ngay = so_ngay_cua_thang(thang,nam);
        }
    }
    else {
        ngay --;
    }
    printf ("\nNgay truoc do: %d/%d/%d", ngay, thang, nam);
}

// d. 
void in_ngay_ke_do (int ngay, int thang, int nam ) {
    int nct = so_ngay_cua_thang (thang, nam);
    if (ngay == nct) {
        if (thang == 12) {
            ngay = 1;
            thang = 1;
            nam ++;
        } else {
            ngay = 1;
            thang ++;
        }
    } else {
        ngay++;
    }
    printf ("\nNgay ke do: %d/%d/%d", ngay, thang, nam);
}

int main () {
    int ngay, thang, nam; 
    do {
        printf ("Nhap ngay, thang, nam: ");
        scanf ("%d%d%d", &ngay, &thang, &nam); 
    } while ((ngay < 1 || ngay > 31) || (thang < 1|| thang > 12) || (nam <1 ));   

    // a.
    printf ("\nSo ngay cua thang: %d",so_ngay_cua_thang(thang,nam));
    //b.
    printf ("\nNgay trong nam: %d",ngay_trong_nam(ngay, thang, nam));
    //c
    in_ngay_truoc_do(ngay, thang,nam);
    //d
    in_ngay_ke_do (ngay, thang, nam); 
}
