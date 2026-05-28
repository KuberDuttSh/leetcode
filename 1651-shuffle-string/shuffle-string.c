char* restoreString(char* s, int* indices, int indicesSize) {
    int i;
    char temp;
    for(i = 0; i < indicesSize; i++) {
        while(indices[i] != i) {
            temp = s[i];
            s[i] = s[indices[i]];
            s[indices[i]] = temp;
            int t = indices[i];
            indices[i] = indices[t];
            indices[t] = t;
        }
    }
    return s;
}