#include <stdio.h>
#include <malloc.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int i,j;
    int *ret=NULL;
    *returnSize=2;
    for(i=0;i<numsSize-1;i++){
        for(j=i+1;j<numsSize;j++){
            if(nums[i]+nums[j]==target){
                ret=(int*)malloc(sizeof(int)*2);
                ret[0]=i;
                ret[1]=j;
                return ret;
            }
        }
    }
    return ret;
}

int main (){
    int nums[4]={2,11,7,15};
    int numsize=4;
    int target=9;
    int* returnsize=NULL;
    int* result=NULL;
    result=twoSum(nums,numsize,target,returnsize);
    printf("%d %d",result[0],result[1]);
    return 0;
}