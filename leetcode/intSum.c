#include <stdio.h>
#include <stdlib.h>
int* twoSum(const int* nums, int numsSize, int target, int* returnSize) {
    int *returnArray = malloc(2 * sizeof(int));
    returnArray[0] = 1;
    returnArray[1] = 1;
    for (int i = 0; i < numsSize; ++i) {
        for (int j = i+1; j < numsSize; ++j) {
            if(nums[i] + nums[j] == target){
                *returnSize = 2;
                returnArray[0] = i;
                returnArray[1] = j;
                return returnArray;
            }
        }
    }
    returnSize = 0;
    return NULL;
}
int main(){
    int nums[] = {1, 2, 4, 6};
    int target = 3;
    int numSize = 4;
    int a = 2;
    int *returnSize = &a;
    printf("[%d,%d]",twoSum(nums, numSize, target, returnSize)[0],  twoSum(nums, numSize, target, returnSize)[1]);
}