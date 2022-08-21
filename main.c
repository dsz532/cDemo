//a=1 b=2 o=0

#include <stdio.h>

int main() {
    unsigned long  a = 1;
    unsigned long  b = 1;
    int n = 0;
    unsigned long output = 0;
    printf("请输入一个正整数:\n");
    scanf("%d", &n);
    while(n<1) {
        printf("请重新输入，必须是正整数: ");
        scanf("%d", &n);
    }
    if (n < 2) {
        printf("0,");
        return 0;
    } else if (n < 3) {
        printf("0,1,");
        return 0;
    }
    for (int count = 0; count < n; count++) {

        printf("%d,", output);
        output=a;
        a=b;
        b=output+a;
    }
//    for (int i = 0; i < n; i++) {
//        if (i < 2) {
//            printf("%d,", i);
//        } else {
//            output = a + b;
//            printf("%d,", output);
//            a = b;
//            b = output;
//        }
//    }
    return 0;
}
