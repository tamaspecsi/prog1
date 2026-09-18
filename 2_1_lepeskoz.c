#include <stdio.h>

int main() {
    int also = 0;
    int felso = 0;
    int lepeskoz = 1;
    scanf("%d%d", &also, &felso);

    while(also <= felso){
        printf("%d ", also);
        also = also + lepeskoz;
        lepeskoz++;
    }
    return 0;
}