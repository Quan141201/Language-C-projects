#include "stdio.h"
int main () {
    /* int i;
    for ( i = 0; i<=9 ; i++ ) {
        printf ("\n%d",i);
    } */
    
    int n, i;
    printf ("n = ");
    scanf ("\n%d", &n);

    for (i = 0; i <= n ; i++ ) {
        printf ("\n%d", i);
    }
}