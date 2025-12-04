1int maxArea(int* height, int heightSize) {
2    int left = 0, right = heightSize - 1;
3    int maxArea = 0, area = 0;
4
5    while (left < right) {
6        area = (right - left) *
7               (height[left] > height[right] ? height[right] : height[left]);
8        if (area > maxArea)
9            maxArea = area;
10        if (height[left] > height[right])
11            right--;
12        else
13            left++;
14    }
15    return maxArea;
16}