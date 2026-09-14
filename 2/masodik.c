#include "stdio.h"

/* Írjunk C-programot, mely kiírja egy egész szám faktoriálisát. */

int main(){
    int n = 0;
    scanf("%d", &n);
    int k = 1;

    while (n>0){
        k = k*n;
        n--;
    }

    printf("%d", k);
    return 0;
}