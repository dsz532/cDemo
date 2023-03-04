#include <stdlib.h>
#include <printf.h>
#include <string.h>

/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** sortTheStudents(int** score, int scoreSize, int* scoreColSize, int k, int* returnSize, int** returnColumnSizes){
    int** result=(int**)malloc(sizeof (int*));
    memset(result,0,sizeof (int*));
    for (int i = 0; i < scoreSize; ++i) {
        for (int j = i; j < scoreSize; ++j) {
            if(score[i][k]<score[j][k]){
                result[0]=score[i];
                score[i]=score[j];
                score[j]=result[0];
            }
        }
    }
    return score;
}
int main(){
    int score[3][4]={
            {10,6,9,1},
            {7,5,11,2},
            {4,8,3,15}
    };
    int* a=NULL;
    int** b=NULL;
    int* p[3];
    p[0]=score[0];
    p[1]=score[1];
    p[2]=score[2];
    int**ps = sortTheStudents(p,3,a,2,a,b);
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4; ++j) {
            printf("%d ",ps[i][j]);
        }
        printf("\n");
    }
    return 0;
}