int singleNumber(int* nums, int numsSize) {
    int c=0;
    int a;
    for(int i=0;i<numsSize;i++){
        c=0;
        for(int j=0;j<numsSize;j++){
            if(i!=j&&nums[i]==nums[j]){
                c++;
            }
        }
        if(c==0){
            a=nums[i];
        }
        
    }
    return a;
}