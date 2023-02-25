#include <stdlib.h>
#include <string.h>

int* countPoints(int** points, int pointsSize, int* pointsColSize, int** queries, int queriesSize, int* queriesColSize, int* returnSize){
    int* result=(int*) malloc(sizeof (int )*queriesSize);
    int _x=0,_y=0;
    memset(result,0,sizeof (int)*queriesSize);
    for(int i=0;i<queriesSize;i++){
        result[i]=0;
        for(int j=0;j<pointsSize;j++){
            _x=points[j][0]-queries[i][0];
            _y=points[j][1]-queries[i][1];
            if(_x*_x+_y*_y<=queries[i][2]){
                result[i]++;
            }
        }
    }
    *returnSize=queriesSize;
    return result;
}