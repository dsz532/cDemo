#include<stdio.h>
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
        int ret[2]={0};
        for(int i=0;i<=numsSize;i++){
            for(int j=i;j<=numsSize;j++){
                if(nums[i]+nums[j]==target){
                    ret[0]=i;
                    ret[1]=j;
                }
            
            }
        }
        return ret;
}
int main (){
    int* nums;
    int target;
    getchar();
    while (getchar()!=']')
    {   
        int i=0;
        scanf("%d",&nums[i]);
    }
    scanf("%d",&target);
    int *ret;
    int *returnsize;
    returnsize[0]=sizeof (nums);
    ret=twoSum(nums,4,target,returnsize);
    printf("[%d,%d]",ret[0],ret[1]);
}