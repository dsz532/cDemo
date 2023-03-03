#include <stdio.h>
int finalValueAfterOperations(char ** operations, int operationsSize){
    int result=0;
    for (int i = 0; i < operationsSize; ++i) {
        for (int j = 0; j < 3; ++j) {
            if(operations[i][j]=='-'){
                result-=1;
                break;
            } else if(operations[i][j]=='+'){
                result+=1;
                break;
            }
        }
    }
    return result;
}


int main (){
    char op[4][3]={{'-','-','X'},
                   {'X','+','+'},
                   {'x','+','+'}
    };
    char *p[3];
    p[0]=op[0];
    p[1]=op[1];
    p[2]=op[2];
    int result= finalValueAfterOperations(p,3);
    printf("%d",result);
    return 0;
}
