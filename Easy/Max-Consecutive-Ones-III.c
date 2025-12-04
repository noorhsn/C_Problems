1int longestOnes(int* nums, int numsSize, int k) {
2    int right, left = 0;
3    int zeroCount = 0;
4    int maxCount = 0;
5    while(right < numsSize){
6        if(nums[right]==0)
7            zeroCount+=1;
8        while(zeroCount>k){
9            if(nums[left]==0)
10                zeroCount-=1;
11            left++;
12        }
13        int width = right - left + 1;
14        if(width > maxCount)
15            maxCount = width;
16        right++;
17    };
18    return maxCount;
19  }