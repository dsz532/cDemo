#include <stdbool.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

bool isStrictlyPalindromic(int n){
    bool isPalindromic=1;
    int len=0;
    int devide_n[20];
    memset(devide_n,0,sizeof (int)*20);
    for (int i = 2; i < n-1; ++i) {
        for (int j = 0; j < 20; ++j) {
        devide_n[j]=n% (int)pow(i,j+1)/ pow(i,j);
        }
        for (int j = 19; j >=0; --j) {
            if(devide_n[j]==0){
                len++;
            } else{
                len=20-len;
                break;
            }
        }
        for (int j = 0; j < len; ++j) {
            if(devide_n[j]!=devide_n[len-j]){
                isPalindromic=0;
            }
        }
    }
    return isPalindromic;
}


int main(){
    int n= 9;
    bool is= isStrictlyPalindromic(n);
    printf("%d",is);
    return 0;
}