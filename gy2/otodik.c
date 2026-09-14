#include <stdio.h>

/*Írjunk programot, mely két szám legkisebb közös többszörösét számítja. A számításhoz használjuk fel a legnagyobb közös osztót: LKKT(a,b) = a * b / LNKO(a,b)*/

int lnko(int sz1, int sz2){


    while (sz2 != 0) {
        int maradek = sz1 % sz2;
        sz1 = sz2;
        sz2 = maradek;
    }

    return sz1;
}

int main(){

    int sz1 = 0;
    int sz2 = 0;

    scanf("%d%d", &sz1, &sz2);

    int lkkt = (sz1 / lnko(sz1, sz2)) * sz2;

    printf("%d", lkkt);
    return 0;
}