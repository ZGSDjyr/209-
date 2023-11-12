#include <stdio.h>
int* twoSum(int* nums, int len, int target, int*b ) {
    static int a[2];
    int i, j;
    for (i = 0; i < len - 1; i++) 
    {
        for (j = i + 1; j < len; j++) 
        {
            if (nums[i] + nums[j] == target) 
            {
                a[0] = i;
                a[1] = j;
                *b = 2;
                return a;
            }
        }
    }
    * b= 0;
    return NULL;
}
int main() {
    int nums[] = { 2, 6, 11, 16 };
    int target = 13;
    int b;
    int* a = twoSum(nums, sizeof(nums) / sizeof(nums[0]), target, &b);
    if (b == 2)
    {
        printf("下标为：%d, %d\n", a[0], a[1]);
    }
    else 
    {
        printf("没有找到和为目标值的两个整数\n");
    }
    return 0;
}
