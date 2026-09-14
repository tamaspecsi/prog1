#include "stdio.h"

/*Írjunk programot, mely a beolvasott két egész szám legnagyobb közös osztóját számítja ki az euklideszi algoritmus szerint*/

int main(){
    int sz1 = 0;
    int sz2 = 0;

    scanf("%d%d", &sz1, &sz2);

    while (sz2 != 0) {
        int maradek = sz1 % sz2;
        sz1 = sz2;
        sz2 = maradek;
    }

    printf("%d\n", sz1);
}