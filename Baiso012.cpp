// Thu vien math.h va cac ham toan hoc

#include "stdio.h"
#include "math.h"
int main () {
	int a = 5; 
	int b = 3;
	
	float kq = (float)a/b;
	
	printf ("ceil(5/3) = %.2f", ceil(kq));
	printf ("\nfloor(5/3) = %.2f", floor(kq));
	printf ("\nsqrt(25) = %.2f", sqrt(25));
	printf ("\n5^3 = %.2f", pow (5,3));
	printf ("\nabs(5) = %d", abs(5));
	printf ("\nfabs(5.4) = %.2f", fabs (5.4));
	
}
