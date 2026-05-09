/*
    Technique:
    - Binary Search
*/

/*
Example 1:

Input: nums = [1,3,5,6], target = 5
Output: 2

Example 2:

Input: nums = [1,3,5,6], target = 2
Output: 1

Example 3:

Input: nums = [1,3,5,6], target = 7
Output: 4
*/

#include<stdio.h>
#include<stdlib.h>

int searchInsert(int* nums, int numsSize, int target) 
{
    int left = 0;
    int right = numsSize - 1;

    while(left <= right)
    {
        int mid = left + (right - left) / 2;

        if(nums[mid] == target)
        {
            return mid;
        }
        else if(nums[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    return left;
}

int main()
{
    int *ptr = NULL;
    int num = 4;
    int iRet = 0;
    int value = 6;

    ptr = (int*)malloc(num * sizeof(int));

    ptr[0] = 1;
    ptr[1] = 3;
    ptr[2] = 5;
    ptr[3] = 7;

    printf("Elements in array are:\n");

    for(int i = 0; i < num; i++)
    {
        printf("%d\t", ptr[i]);
    }

    printf("\n");

    iRet = searchInsert(ptr, num, value);

    printf("%d should be at index %d\n", value, iRet);

    free(ptr);

    return 0;
}