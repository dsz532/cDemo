#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int *leftRigthDifference(int *nums, int numsSize, int *returnSize) {
    int *answer=(int*) malloc(sizeof (int)*numsSize);
    int left = 0;
    int right = 0;
    for (int i = 0; i < numsSize; ++i) {
        for (int j = 0; j < i; ++j) {
            left += nums[j];
        }
        for (int j = numsSize-1; j > i; --j) {
            right += nums[j];
        }
        answer[i] = abs(right - left);
        left = 0;
        right = 0;
    }
    returnSize=&numsSize;
    return answer;
}
int checkout(int* nums){
    for (int i = 0; i < 4; ++i) {
        printf("%d ",nums[i]);
    }
    return 0;
}
int main (){
    int nums[4]={10,4,8,3};
    int *answer;
    int numsSize=4;
    int *returnSize=NULL;
    answer = leftRigthDifference(nums,numsSize,returnSize);
//    checkout(nums);
    for (int i = 0; i < 4; ++i) {
        printf("%d ",answer[i]);
    }
    return 0;
}
#pragma clang diagnostic pop