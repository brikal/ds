Name    :- Brikal Ketanbhai Kunjadiya
Roll no :- 12
Course  :- MCA
Subject :- Data Structure

16. Write a C program to put even and odd elements of array in two separate arrays.

#include<stdio.h>

int main()
{
    int i, a=0, b=0, arr[10], even[10], odd[10];

// define array & store all array elements through loop
    printf("Enter all elements of array: ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i=0; i<10; i++){
        if(arr[i]%2 == 0){
            even[a]=arr[i];
            a++;
        }
        else{
            odd[b] = arr[i];
            b++;
        }
    }
    printf("array of even element: ");
    for(i=0; i<a; i++){
        printf("%d ",even[i]);
    }
    printf("\narray of odd element: ");
    for(i=0; i<b; i++){
        printf("%d ",odd[i]);
    }
}