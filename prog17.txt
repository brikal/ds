Name    :- Brikal Ketanbhai Kunjadiya
Roll no :- 12
Course  :- MCA
Subject :- Data Structure

17.  a C program to search an element in an array via linear search.

#include<stdio.h>
int main()
{
    int i, j, n, x, count=0;
    printf("Enter no. of array elements: ");
    scanf("%d", &n);

    int arr[n];
        printf("Enter the number: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element you want to find: ");
    scanf("%d", &x);
    for(i=0;i<n;i++)
    {
        if(arr[i] == x)
        {
            printf("\nElement found at position %d", i+1);
            count++;
        }
    }
    if(count ==0)
    {
        printf("\nElement not found in the array");
    }
    else
    {
        printf("\nElement occures %d times in the array: ", count);
    }
}