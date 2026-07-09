bool isPalindrome(int x) {
    int rem = 0 ;
    int n = x ;
    long int rev = 0 ;
    if(x < 0){
        return false;
    }else{
     while(x!=0){
        rem = x % 10 ;
        x = x / 10 ; 
        rev = rev*10 + rem;
     }
     if(rev==n){
        return true;
     }
     else{
        return false;
     }
    }
}