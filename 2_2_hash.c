#include <stdio.h>

int main() {
    int a = 0;
    scanf("%d", &a);

    for(int i = 0; i<a; i++){
        if(i<100){
            printf("#");
        }
    }
    return 0;
}