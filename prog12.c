Name    :- Brikal Ketanbhai Kunjadiya
Roll no :- 12
Course  :- MCA
Subject :- Data Structure

12. Write a C program to print all unique elements in the array.

#include<stdio.h>

int main()
{
    int len, i, j, isuniq;

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

//check for unique elements using for and if and print it
    printf("Array of all unique elements is: ");
    for (i = 0; i < len; i++)
    {
        isuniq = 1;// assuming elements as unique
        for (j = 0; j < len; j++)
        {
            if (i != j && arr[i] == arr[j])// check for common elements & assign 0 to it
            {
                isuniq = 0;
                break;
            }
        }
        if (isuniq == 1)
        {
            printf("%d ", arr[i]);
        }
    }
    printf("empty");
}