#include "stdio.h"
#include "stdlib.h"
int removeDuplicates(int* nums, int numsSize) {
    int k = 1;
    if(numsSize == 0){
        return 0;
    }
    for (int i = 1; i < numsSize; ++i) {
        if(nums[i] != nums[i-1]){
            nums[k] = nums[i];
            k++;
        }
    }
    return k;
}
int main(){
    int a = 1;
    int b = 1;
    int c = 2;

    int *nums = malloc(sizeof(int) * 3);
    nums[0] = a;
    nums[1] = b;
    nums[2] = c;
    printf("There are %d duplicates", removeDuplicates(nums, 3));
    return 0;
}