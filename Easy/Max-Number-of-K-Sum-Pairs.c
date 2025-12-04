1// Comparison function for qsort
2int compareInt(const void* a, const void* b) {
3    int ia = *(const int*)a;
4    int ib = *(const int*)b;
5    return ia - ib;
6}
7
8int maxOperations(int* nums, int numsSize, int k){
9
10    int result = 0;
11    // Step 1: sort the array
12    qsort(nums, numsSize, sizeof(int), compareInt);
13
14    if(k == 1)
15        return 0;
16    
17    for (int i = 0, j = numsSize - 1; i<j; ){
18        int sum = nums[i]+nums[j];
19        if(sum==k){
20            nums[i]=nums[j]=0;
21            i++; j--;
22            result++;
23        }
24        else if(sum>k)
25            j--;
26        else
27            i++;
28    }
29    return result;
30}