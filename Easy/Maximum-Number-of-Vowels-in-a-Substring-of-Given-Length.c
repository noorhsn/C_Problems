1int maxVowels(char* s, int k) {
2  int count = 0;
3  int size = 0;
4  while (s[size] != '\0') {
5    size++;
6  }
7  char s_up[size + 1];
8  while(*s){
9    s_up[count++] = toupper(*s);
10    s++;
11  }
12  s_up[count] = '\0';
13  count = 0;
14  int i = 0;
15  for (i = 0; i < k; i++)
16    if(s_up[i] == 'A' || s_up[i] == 'E' || s_up[i] == 'I' || s_up[i] == 'O' || s_up[i] == 'U')
17      count++;
18  int maxCount = count;
19  for(int j = k; j < size; j++) {
20    if(s_up[j] == 'A' || s_up[j] == 'E' || s_up[j] == 'I' || s_up[j] == 'O' || s_up[j] == 'U')
21      count++;
22    if(s_up[j - k] == 'A' || s_up[j - k] == 'E' || s_up[j - k] == 'I' || s_up[j - k] == 'O' || s_up[j - k] == 'U')
23      count--;
24    if(count > maxCount)
25      maxCount = count;
26  }
27  return maxCount;
28}
29