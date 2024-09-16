Name    :- Brikal Ketanbhai Kunjadiya
Roll no :- 12
Course  :- MCA
Subject :- Data Structure

13. Write a C program to count total number of duplicate elements in an array

#include<stdio.h>

int main()
{
    int len, i, j, count;

// ask for size of array
    printf("Enter total no. of array elements: ");
    scanf("%d", &len);

// define array & store all array elements through loop
    int arr[len];
    printf("Enter %d array elements: ", len);
    for (i = 0; i < len; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < len; i++)
    {
        count = 0;
        for (j = 0; j < len; j++)
        {
            if (i != j && arr[i] == arr[j+1])
            {
                count+=1;
            }
        }
    }
    printf("There are %d duplicate array elements", count);
}