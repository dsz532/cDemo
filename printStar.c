#include <stdio.h>

int main() {
    int line = 0;
    printf("输入行数:\n");
    scanf("%d", & line);
    for(int l=1;l<=line;l++){
        printf("*");
        if(l==1||l==line){
            for(int f=0;f<line-2;f++){
                printf("*");
            }
        }
        else{
            for(int o=0;o<line-2;o++){
                printf(" ");
            }
        }
        printf("*\n");
//    int n = 0;
//    printf("请输入一个数\n");
//    scanf("%d", &n);
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < n - i - 1; j++) {
//            printf(" ");
//        }
//        for (int k = 0; k <= i; k++) {
//            printf("%d", i - k + 1);
//        }
//        for (int l = 2; l <= i + 1; l++) {
//            printf("%d", l);
//        }
//    for(int i=0;i<n;i++){
//        for(int j=0;j<i;j++){
//            printf(" ");
//        }
//        for(int k=0;k<(n-i)*2-1;k++){
//            printf ("*");
//        }
//    for (int i = n; i > 0; i--) {
//        for (int j = 0; j < i-1; j++) {
//            printf(" ");
//        }
//        for (int k = 0; k < (n - i+1)*2-1; k++) {
//            printf("*");
//        }
//        for (int j = 0; j < i-1; j++) {
//            printf(" ");
//        }
//        printf("\n");
}
//    for(int i=n;i>0;i--){
//        for(int j=0;j<i;j++){
//            printf("*");
//        }
//        printf("\n");
//    }
//    for (int i = 1; i <= n; i++) {
//        for (int j = 0; j < i; j++) {
//            printf("*");
//        }
//        printf("\n");
//    }

return 0;
}
