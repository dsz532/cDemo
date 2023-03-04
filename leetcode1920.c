#include <stdlib.h>
#include <printf.h>

int* buildArray(int* nums, int numsSize, int* returnSize){
    int* result=(int*)malloc(sizeof (int)*numsSize);
    for (int i = 0; i < numsSize; ++i) {
        result[i]=nums[nums[i]];
    }
    return result;
}

int main(){
    int nums[]={0,2,1,5,3,4};
    int* p=NULL;
    p= buildArray(nums,6,p);
    for (int i = 0; i < 6; ++i) {
        printf("%d",p[i]);
    }
    return 0;
}