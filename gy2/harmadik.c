#include "stdio.h"

/*Írjunk C-programot, mely az egyesével növekvő lépésközzel növekvő, 1-ről induló számsorozat első n elemét írja ki:*/

int main(){
    int n = 0;
    int szam = 1;
    scanf("%d", &n);

    for(int i = 0; i<n; i++){
        printf("%d ", szam);
        szam = szam + i+1;
    }
}