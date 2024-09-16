Name    :- Brikal Ketanbhai Kunjadiya
Roll no  :- 12
Course  :- MCA
Subject  :- Data Structure

8. Write a C program to copy all elements from an array to another array.

#include<stdio.h>

int main()
{
    int len, i;

// ask for size of array
    printf("Eenter total no. of array elements: ");
    scanf("%d", &len);

// define array & store all array elements through loop and assign to another array
    int arr[len], copy[len];
    printf("Enter all array elements: ");
    for (i = 0; i < len; i++)
    {
        scanf("%d", &arr[i]);
        copy[i] = arr[i];
        printf("%d ", copy[i]);
    }
}