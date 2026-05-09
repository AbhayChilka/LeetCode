/*
    Technique:
    - Two Pointers
*/

/*
Example 1:

Input: nums = [3,2,2,3], val = 3
Output: 2, nums = [2,2,_,_]
Explanation: Your function should return k = 2, with the first two elements of nums being 2.
It does not matter what you leave beyond the returned k (hence they are underscores).

Example 2:

Input: nums = [0,1,2,2,3,0,4,2], val = 2
Output: 5, nums = [0,1,4,0,3,_,_,_]
Explanation: Your function should return k = 5, with the first five elements of nums containing 0, 0, 1, 3, and 4.
Note that the five elements can be returned in any order.
It does not matter what you leave beyond the returned k (hence they are underscores).
*/

#include<stdio.h>
#include<stdlib.h>

int removeElement(int* nums, int numsSize, int val) 
{
    int k = 0;

    for(int i = 0; i < numsSize; i++)
    {
        if(nums[i] != val)
        {
            nums[k] = nums[i];
            k++;
        }
    }    

    return k;
}

int main()
{
    int *Arr = NULL;
    int iSize = 0;
    int iResult = 0;
    int value = 0;

    printf("Enter how many elements want : ");
    scanf("%d", &iSize);

    Arr = (int *)malloc(iSize * sizeof(int));

    printf("Enter %d elements : \n", iSize);

    for (int i = 0; i < iSize; i++)
    {
        scanf("%d", &Arr[i]);
    }

    printf("Enter value to delete from array : ");
    scanf("%d", &value);
    
    iResult = removeElement(Arr, iSize, value);

    for (int  i = 0; i < iResult; i++)
    {
        printf("%d ", Arr[i]);
    }
    
    free(Arr);
    
    return 0;
}
