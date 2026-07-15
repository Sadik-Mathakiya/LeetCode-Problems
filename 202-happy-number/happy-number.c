

bool isHappy(int n) {
    int rem;
    int ncopy = n;
    int finalsum;

    while (1) { 
        finalsum = 0;
        
        while (ncopy != 0) {
            rem = ncopy % 10;
            finalsum += (rem * rem);
            ncopy = ncopy / 10;
        }
        
        if (finalsum == 1) {
            return true;
        }
        
        if (finalsum == 4) {
            return false;
        }
        
        ncopy = finalsum;
    }
    
    return false;
}