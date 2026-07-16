int reverse(int x){
    int rem;
   long int rev=0;
            while(x!=0){

        rem=x%10;
        rev=rev*10+rem;
        if(rev<INT_MIN||rev>INT_MAX){
            return 0;
        }
        x=x/10;
        }
        return rev;
}