#include <stdio.h>
int main (){
    char src[]="sysbdmin";
    for ( int i = 0; i <= 39 && src[i]; ++i ){
    ++src[i];
    }
    puts(src);
    return 0;
}