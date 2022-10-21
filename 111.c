#include <stdio.h>
#include <math.h>
int main (){
    int a,b;
    scanf("%d %d",&a,&b);
    double c;
    float d;
    scanf("%lf",&c);
    d= a*pow((1+c),b);
    printf("%.2f",d);
    return 0;
}