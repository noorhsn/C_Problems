1bool isSubsequence(char* s, char* t) {
2    if(*s && *t){
3        while(*t != '\0'){
4            if(*s == *t){
5                s++;
6            }
7            if(*s == '\0')
8                return true;
9            t++;
10        }
11    }
12    return *s=='\0';
13}