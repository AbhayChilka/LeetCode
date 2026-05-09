/*
    Technique:
    - Two Pointers
*/


/*
Example 1:

Input: nums = [1,1,2]
Output: 2, nums = [1,2,_]
Explanation: Your function should return k = 2, with the first two elements of nums being 1 and 2 respectively.
It does not matter what you leave beyond the returned k (hence they are underscores).

Example 2:

Input: nums = [0,0,1,1,1,2,2,3,3,4]
Output: 5, nums = [0,1,2,3,4,_,_,_,_,_]
Explanation: Your function should return k = 5, with the first five elements of nums being 0, 1, 2, 3, and 4 respectively.
It does not matter what you leave beyond the returned k (hence they are underscores).
*/

#include<stdio.h>
#include<stdlib.h>

int removeDuplicates(int* nums, int numsSize) 
{
    if(numsSize == 0)
    {
        return 0;
    }
    
    int temp = 0;

    for(int i = 1; i < numsSize; i++)
    {
        if(nums[i] != nums[temp])
        {
            temp++;
            nums[temp] = nums[i];
        }
    }
    return temp+1;
}

int main()
{
    int *Arr = NULL;
    int iSize = 0;
    int iResult = 0;

    printf("Enter how many elements want : ");
    scanf("%d", &iSize);

    Arr = (int *)malloc(iSize * sizeof(int));

    printf("Enter %d elements : \n", iSize);

    for (int i = 0; i < iSize; i++)
    {
        scanf("%d", &Arr[i]);
    }

    iResult = removeDuplicates(Arr, iSize);

    for (int  i = 0; i < iResult; i++)
    {
        printf("%d ", Arr[i]);
    }
    
    free(Arr);
    
    return 0;
}
