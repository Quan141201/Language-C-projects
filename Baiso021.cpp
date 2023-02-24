// Bang ma ASCII
// In ra man hinh ki tu tu A->Z

#include "stdio.h"
int main () {
    char kytu;

    for (kytu = 65; kytu <= 90; kytu++) {
        //printf ("%c ", kytu);
        printf ("%d - %c \n", kytu, kytu);
    }
}
