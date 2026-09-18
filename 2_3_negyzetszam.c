#include <stdio.h>

int main() {
    int a = 0;
    scanf("%d", &a);

    int osztokszama = 0;
    for(int i = a; i>0; i--){
        if(a % i == 0){
            osztokszama++;
        }
    }

    //printf("%d", osztokszama);

    if(osztokszama % 2 == 0){
        printf("Not a square number");
    } else {
        printf("Square number");
    }
    return 0;
}

/*
#include <stdio.h>
#include <math.h>

int main() {
    int a = 0;
    scanf("%d", &a);

    int b = sqrt(a);
    if(b*b == a){
        printf("Square number");
    } else {
        printf("Not a square number");
    }
    return 0;
}
*/