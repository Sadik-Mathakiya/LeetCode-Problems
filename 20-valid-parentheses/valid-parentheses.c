
bool isValid(char* s) {
    char s1[1000000];
    
    int i=0;
    int top=-1;
    while(s[i]!='\0'){
    if(s[i]=='('||s[i]=='['||s[i]=='{'){
        top++;
        s1[top]=s[i];
        i++;
    }else{
        if (top == -1) {
                return false;
            }
        if((s[i]==')' && s1[top]=='(') || (s[i]==']' && s1[top]=='[') || (s[i]=='}' && s1[top]=='{')){
            top--;
            i++;
        }
        else{
            return false;
        }
    }
}
if(top==-1){
    return true;
}
else{
    return false;
}
}