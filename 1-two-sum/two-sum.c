#include <stdlib.h> // Required for malloc

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    // 1. Allocate memory for the two indices we will return
    int* result = (int*)malloc(2 * sizeof(int));
    
    // 2. Loop through the array using numsSize
    for(int i = 0; i < numsSize; i++) {
        // 3. Added the missing j++ increment
        for(int j = i + 1; j < numsSize; j++) { 
            
            // 4. Check if the sum matches the target
            if(nums[i] + nums[j] == target) {
                result[0] = i;
                result[1] = j;
                
                // 5. Set the return size to 2 
                *returnSize = 2; 
                
                // 6. Return the dynamically allocated array
                return result; 
            }
        }
    }
    
    // Fallback if no solution is found (though the problem usually guarantees one)
    *returnSize = 0;
    return NULL;
}