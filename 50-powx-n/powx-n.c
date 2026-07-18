double myPow(double x, int n) {
    double final=1;
    double mult;
    if(n<0){
        x=1/x;
        n=-(n+1);
        final=final*x;
    }
    
    mult=x;
    while(n>0){
        if(n%2==1){
            final=final*mult;
        }
        mult=mult*mult;
        n=n/2;
    }
    return final;
}