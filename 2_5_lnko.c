#include <stdio.h>

int main() {
    int a = 0;
    int b = 0;
    scanf("%d%d", &a, &b);

    int maradek = a%b;

    while(maradek != 0){
        a = b;
        b = maradek;
        maradek = a%b;
    }

    printf("%d", b);

    return 0;
}