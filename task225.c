#include<stdio.h>
float sum_elements(float a[],unsigned length){
    int i;
    float result=0;

    for (i = 0; i <= length-1; i++)
    {
        result+=a[i];
    }
    return result;
}
int main(){
    // float a[1]={1};
    // float r=sum_elements(a,0);
    unsigned r=0;
    r-=1;
    printf("%u",r);
    return 0;
}