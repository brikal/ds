Name    :- Brikal Ketanbhai Kunjadiya
Roll no :- 12
Course  :- MCA
Subject :- Data Structure

10. Write a C program to delete an element from an array at specified position

#include<stdio.h>

int main()
{
    int len, i, rindex;

// ask for size of array
    printf("Enter total no. of array elements: ");
    scanf("%d", &len);

// define array & store all array elements through loop
    int arr[len];
    printf("Enter all array elements: ");
    for (i = 0; i < len; i++)
    {
        scanf("%d", &arr[i]);
    }

// ask for index position of deleting element
    printf("Enter index position of deleting array elemenet: ");
    scanf("%d", &rindex);

// find that index num through for and if & ignore that value cause of 'continue'
// & print remaing elements

    printf("Array after deleting element is: ");
    for (i = 0; i < len; i++)
    {
        if (arr[i] == arr[rindex])
        {
            continue;
        }
        printf("%d ", arr[i]);
    }
}