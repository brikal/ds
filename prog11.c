Name    :- Brikal Ketanbhai Kunjadiya
Roll no :- 12
Course  :- MCA
Subject :- Data Structure

11. Write  a C program to count frequency of each element in an array.

#include<stdio.h>
int main()
{
    int len, i, j, count;

// ask for size of array
    printf("Enter total no. of array elements: ");
    scanf("%d", &len);

// define array & store all array elements through loop
    int arr[len];
    int freq[len];
    printf("Enter all array elements: ");
    for (i = 0; i < len; i++)
    {
        scanf("%d", &arr[i]);
        freq[i] = -1;
    }

// check for every common array elements
    for (i = 0; i < len; i++)
    {
        count=1;
        for (j = i+1; j < len; j++)
        {
            if (arr[i]==arr[j]) // check for same elements
            {
                count++;    // add value by 1
                freq[j] = 0; // 
            }
        }
        if (freq[i]!=0)
        {
            freq[i] = count;
        }
    }

// print frequency of every array elements
    for (i = 0; i < len; i++)
    {
        if (freq[i]!=0)
        {
            printf("frequency of %d , is %d\n", arr[i], freq[i]);   
        }
    }
}