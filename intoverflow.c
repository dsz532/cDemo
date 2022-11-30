#include <stdio.h>
int uadd_ok(unsigned x,unsigned y){
    int add=x+y;
    if(add<x||add<y){
        return 0;
    }else{
        return 1;
    }
}

int tadd_ok(int x,int y){
    int sum=x+y;
    if(x>0&&y>0){
        if (sum<=0)
        {
            return 0;
        }else{
            return 1;
        }
    }else if(x<0&&y<0){
        if(sum>=0){
            return 0;
        }else{
            return 1;
        }
    }else{
        return 1;
    }
}