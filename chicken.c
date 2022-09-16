#include <stdio.h>
int main (){
    int rooster=0;
    int hen=0;
    int chik=0;
    int sum=0;
    for(rooster=20;rooster>0;rooster--){
        for(hen=(100-rooster*5)/3;hen>0;hen--){
            chik=100-rooster*5-hen*3;
            sum=chik*3+hen+rooster;
            if(sum==100) {
                printf("rooster:%d,hen:%d,chik:%d\n", rooster, hen, chik*3);
            }
        }
    }
    return 0;
}