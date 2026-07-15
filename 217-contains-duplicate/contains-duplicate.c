bool containsDuplicate(int* nums, int numsSize) {
    for (int gap = numsSize / 2; gap > 0; gap /= 2) {
        for (int i = gap; i < numsSize; i++) {
            int temp = nums[i];
            int j;
            for (j = i; j >= gap && nums[j - gap] > temp; j -= gap) {
                nums[j] = nums[j - gap];
            }
            nums[j] = temp;
        }
    }
    
    for (int i = 0; i < numsSize - 1; i++) {
        if (nums[i] == nums[i + 1]) {
            return true;
        }
    }
    
    return false;
}