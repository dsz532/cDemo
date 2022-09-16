#include <stdio.h>
int main(){
    int s=100;
    int a=0;
    int b=0;
    int c=0;
    int A=0;
    for(s=100;s<=999;s++){
        a=s/100;
        b=(s%100)/10;
        c=s%10;
        A=a*a*a+b*b*b+c*c*c;
        if(A==s){
            printf("%d ",s);
        }
    }
    return 0;
}