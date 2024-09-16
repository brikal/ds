Name    :- Brikal Ketanbhai Kunjadiya
Roll no :- 12
Course  :- MCA
Subject :- Data Structure

6. Write a C program to count total number of even and odd elements in an array.

#include<stdio.h>

int main()
{
    int len, i, even=0, odd=0;

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

// check for even & odd array elements & print num of elements 
    for (i = 0; i < len; i++)
    {
        if (arr[i]!=0 && arr[i]%2==0)
        {
            even+=1;
        }
        else
        {
            odd+=1;
        }
    }
    printf("%d odd elements\n%d even elements", odd, even);
}