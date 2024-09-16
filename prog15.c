Name    :- Brikal Ketanbhai Kunjadiya
Roll no :- 12
Course  :- MCA
Subject :- Data Structure

15. Write a C program to find reverse of an array.

#include<stdio.h>

int main()
{
    int n, i, a=0;

// ask for size of array
    printf("Enter total no. array elements: ");
    scanf("%d", &n);

// define array & store all array elements through loop
    int arr[n];
    printf("Enter %d elements of 1st array: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Reverse array is: ");
    int brr[n];
    for(i=n-1; i>=0; i--)
    {
        brr[a] = arr[i];
        a++;
    }
    for(i=0; i<n; i++)
    {
        printf("%d ",brr[i]);
    }
}