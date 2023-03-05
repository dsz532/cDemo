#include <stdio.h>
#include <string.h>
int main(){
    int n=0;
    scanf("%d\n",&n);
    char buf[1000];
    gets(buf);
    int len= strlen(buf);
    int wide=0;
    if(len%n==0){
        wide=len/n;
    } else{
        wide=len/n+1;
    }
    char result[n][wide];
    int cou=0;
    for (int i = wide-1; i >=0; --i) {
        for (int j = 0; j < n; ++j) {
            if(buf[cou]!='\0'){
                result[j][i]=buf[cou];
                cou++;
            } else{
                for (int k = j; k < n; ++k) {
                    result[k][i]=' ';
                }
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < wide; ++j) {
            printf("%c",result[i][j]);
        }
        printf("\n");
    }
    return 0;
}