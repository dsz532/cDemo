#include <stdio.h>
#include <malloc.h>
#include <string.h>

int *minOperations(char *boxes, int *returnSize) {
    int inputSize=0;
    while (1){
        if(boxes[inputSize]=='0'||boxes[inputSize]=='1'){
            inputSize++;
        } else{
            break;
        }
    }
    int* answer=(int*) malloc(sizeof (int)*inputSize);
    memset(answer,0,sizeof (int)*inputSize);
    for (int i = 0; i < inputSize; ++i) {
        for (int j = 0; j < inputSize; ++j) {
            if (boxes[j] == '1') {
                answer[i] += abs(j - i);
            }
        }
    }
    return answer;
}


int main() {
    char boxes[6] = "001011";
    int *returnSize = NULL;
    int *answer= minOperations(boxes,returnSize);
    for (int i = 0; i < 6; ++i) {
        printf("%d ",answer[i]);
    }
    return 0;

}