char* removeDuplicateLetters(char* s) {
    int count[26] = {0};
    int visited[26] = {0};
    int n = strlen(s);

    for(int i = 0; i < n; i++) {
        count[s[i] - 'a']++;
    }

    static char stack[10001];
    int top = -1;

    for(int i = 0; i < n; i++) {
        char ch = s[i];
        count[ch - 'a']--;

        if(visited[ch - 'a'])
            continue;

        while(top >= 0 &&
              stack[top] > ch &&
              count[stack[top] - 'a'] > 0) {
            visited[stack[top] - 'a'] = 0;
            top--;
        }

        stack[++top] = ch;
        visited[ch - 'a'] = 1;
    }

    stack[top + 1] = '\0';
    return stack;
}