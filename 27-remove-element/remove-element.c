int removeElement(int* nums, int numsSize, int val) {
    for (int i = 0; i < numsSize; i++) {

        if (nums[i] == val) {

            for (int k = i; k < numsSize - 1; k++) {
                nums[k] = nums[k + 1];
            }

            numsSize--;
            i--;
        }
    }
    return numsSize;
}