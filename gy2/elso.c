#include "stdio.h"

/* Írjunk C-programot, mely kilistázza a 0 és n közé eső (zárt intervallum) páros számokat! */

int main() {
    int n = 0;
    int i = 0;

    scanf("%d", &n);

    while(i <= n){
        printf("%d ", i);
        i = i+2;
    }
    return 0;
}