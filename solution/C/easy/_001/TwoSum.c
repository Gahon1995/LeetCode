/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target) {
    int * results =(int *)malloc(sizeof(int)*2);
    for(int i=0;i<numsSize-1;++i){
        for (int j=i+1;j<numsSize;++j){
            if(nums[i]+nums[j]==target){
                results[0]=i;
                results[1]=j;
            }
        }
    }
    return results;
}

