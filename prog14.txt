Name    :- Brikal Ketanbhai Kunjadiya
Roll no :- 12
Course  :- MCA
Subject :- Data Structure

14. Write a C program to merge two arrays to third array.

#include<stdio.h>

int main()
{
    int n, n1, n2, i;

// ask for size of array
    printf("Enter total no. of 1st & 2nd array elements: ");
    scanf("%d %d", &n1, &n2);

// define array & store all array elements through loop
    int arr1[n1];
    printf("Enter %d elements of 1st array: ", n1);
    for (i = 0; i < n1; i++)
    {
        scanf("%d", &arr1[i]);
    }

    int arr2[n2];
    printf("Enter %d elements of 2nd array: ", n2);
    for (i = 0; i < n2; i++)
    {
        scanf("%d", &arr2[i]);
    }

    n = n1+n2;
    int arr[n];

    for (i = 0; i < n1; i++)
    {
        arr[i] = arr1[i];
    }

    for (i = 0; i < n2; i++)
    {
        arr[i+n1] = arr2[i];
    }

    printf("Merged array is: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}