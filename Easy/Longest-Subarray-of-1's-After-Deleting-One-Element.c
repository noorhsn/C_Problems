1int longestSubarray(int* nums, int numsSize) {
2    int left = 0, right = 0;
3    int count = 0;
4    int maxCount = 0;
5
6    while(right < numsSize){
7
8        if(nums[right] == 0)
9            count++;
10
11        while(count>1){
12            if(nums[left]==0)
13                count--;
14            left++;
15        }
16        int window = right -left + 1;
17        if(window-1 > maxCount)
18            maxCount = window - 1;
19        right++;
20    }
21    return maxCount;
22}