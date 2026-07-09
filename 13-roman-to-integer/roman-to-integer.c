int romanToInt(char* s) {
    int ans = 0;

    char roman[7] = {'I', 'V', 'X', 'L', 'C', 'D', 'M'};
    int val[7] = {1, 5, 10, 50, 100, 500, 1000};

    for (int i = 0; s[i] != '\0'; i++) {

        if (s[i] == 'I' && s[i + 1] == 'V') {
            ans += 4;
            i++;
            continue;
        }
        if (s[i] == 'I' && s[i + 1] == 'X') {
            ans += 9;
            i++;
            continue;
        }
        if (s[i] == 'X' && s[i + 1] == 'L') {
            ans += 40;
            i++;
            continue;
        }
        if (s[i] == 'X' && s[i + 1] == 'C') {
            ans += 90;
            i++;
            continue;
        }
        if (s[i] == 'C' && s[i + 1] == 'D') {
            ans += 400;
            i++;
            continue;
        }
        if (s[i] == 'C' && s[i + 1] == 'M') {
            ans += 900;
            i++;
            continue;
        }

        for (int j = 0; j < 7; j++) {
            if (roman[j] == s[i]) {
                ans = ans + val[j];
            }
        }
    }

    return ans;
}