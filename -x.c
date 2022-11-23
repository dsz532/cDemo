#include <stdio.h>

int main() {
    int x1, x2;
    do {
        printf("Input x1, x2\n");
        scanf("%d,%d",&x1,&x2);
        if(getchar()!='\n'){
            if(getchar()!='\n'){
                getchar();
            }
        }
    } while (x1 * x2 >= 0);
    printf("x1=%d,x2=%d", x1, x2);
    return 0;
}

