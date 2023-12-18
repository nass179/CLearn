#include <stdio.h>
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    for (int i = 0; i < numsSize; ++i) {
        if(nums[i] + nums[i+1] == target){
            returnSize[0] = nums[i];
            returnSize[1] = nums[i+1];
            return returnSize;
        }
    }
}
int main(){
    int nums[] = {1, 2, 4, 6};
    int target = 3;
    int numSize = 4;
    int returnSize[] = {0, 0};
    printf("%d",twoSum(nums, numSize, target, returnSize)[0]);
}