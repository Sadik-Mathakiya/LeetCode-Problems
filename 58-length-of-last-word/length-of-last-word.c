int lengthOfLastWord(char* s) {
    int len = strlen(s);
    int c = 0;
    int i = len - 1;

    // Step 1: Skip all trailing spaces (safely!)
    while (i >= 0 && s[i] == ' ') {
        i--;
    }

    // Step 2: Count the length of the last word (safely!)
    while (i >= 0 && s[i] != ' ') {
        c++;
        i--;
    }

    return c;
}