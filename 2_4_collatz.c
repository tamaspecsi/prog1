#include <stdio.h>

int main() {
    int a0 = 0;
    int i = 0;
    scanf("%d", &a0);

    while(a0 > 1){
        if(a0 % 2 == 0){
            a0 = a0 / 2;
        } else {
            a0 = 3* a0 + 1;
        }
        //printf("%d ", a0);
        i++;
    }
    printf("%d", i);

    return 0;
}