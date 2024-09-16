Name    :- Brikal Ketanbhai Kunjadiya
Roll no :- 12
Course  :- MCA
Subject :- Data Structure

19. Write a C program to sort array elements in ascending or descending order(bubble sort).

#include<stdio.h>

int main()
{
    int len, i, j, tem, choice;

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
    printf("Enter choice:\n1 ascending order\n2 descending order\n");
    scanf("%d", &choice);
    if (choice==1)
    {
        for (i = 0; i < len; i++)
        {
            printf("%d ", arr[i]);
        }
    }
    else if (choice==2)
    {
        for (i = len-1; i >= 0; i--)
        {
            printf("%d ", arr[i]);
        }
    }
    else
    {
        printf("invalid input");
    }
}