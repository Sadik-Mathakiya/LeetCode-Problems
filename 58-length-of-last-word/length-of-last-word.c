int lengthOfLastWord(char* s) {
    int len = strlen(s);
    int c = 0;
    int i = len - 1;
        while (i >= 0 && s[i] == ' ') {
        i--;
    }
    while (i >= 0 && s[i] != ' ') {
        c++;
        i--;
    }

    return c;
}