Name    :- Brikal Ketanbhai Kunjadiya
Roll no :- 12
Course  :- MCA
Subject :- Data Structure

5. Write a c program to find second largest element in an array.

#include<stdio.h>

int main()
{
    int len, i, j, tem;

// ask for size of array
    printf("enter total no. of array elements: ");
    scanf("%d", &len);

// define array & store all array elements through loop
    int arr[len];
    printf("enter all array elements: ");
    for (i = 0; i < len; i++)
    {
        scanf("%d", &arr[i]);
    }

// sort array by implementing bubble sort
    for (i = 0; i < len; i++)
    {
        for (j = 0; j < len-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                tem = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tem;
            }
        }
    }

// print the second largest array element
    printf("second largest array element is: %d ", arr[len-2]);
}