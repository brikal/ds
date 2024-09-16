Name    :- Brikal Ketanbhai Kunjadiya
Roll no :- 12
Course  :- MCA
Subject :- Data Structure

9. Write a C program to insert an element in an array.

#include<stdio.h>

int main()
{
    int len, i, add;

// ask for size of array
    printf("Enter total no. of array elements: ");
    scanf("%d", &len);

// define array & store all array elements through loop
    int arr[len+1];
    printf("Enter all array elements: ");
    for (i = 0; i < len; i++)
    {
        scanf("%d", &arr[i]);
    }

// ask for inserting value in array
    printf("Enter element you want to insert: ");
    scanf("%d", &add);    
    arr[len]=add;

// print the array after inserting value
    printf("Your array after inserting is: ");
    for (i = 0; i <= len; i++)
    {
        printf("%d ", arr[i]);
    }
}