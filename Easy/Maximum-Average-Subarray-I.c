1double findMaxAverage(int* nums, int numsSize, int k) {
2    int i = 0;
3    long long sum = 0;
4
5    for(i = 0; i < k; i++){
6        sum += nums[i];
7    }
8    long long max = sum;
9    for (i = k; i < numsSize; i++){
10        sum +=nums[i]-nums[i-k];
11        if( sum > max )
12            max = sum;
13    }
14    return (double)max/k;
15}