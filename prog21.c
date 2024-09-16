Name    :- Brikal Ketanbhai Kunjadiya
Roll no :- 12
Course  :- MCA
Subject :- Data Structure

21. Write a C program to left rotate an array.

#include <stdio.h>
void main() {
    int size, n;

    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    int arr[size];

    printf("Enter the elements of the array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number of rotations: ");
    scanf("%d", &n);

    n = n%size;

    int temp[n];
    //print the array
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    //copying the array into temparary array
    for (int i = 0; i < n; i++) {
        temp[i] = arr[i];
    }
    //shifting the varray value by n
    for (int i = 0; i < size - n; i++) {
        arr[i] = arr[i + n];
    }
    //resing the corect value
    for (int i = 0; i < n; i++) {
        arr[size - n + i] = temp[i];
        printf("\n%d %d",size-n+i,temp[i]);
    }
    printf("\nArray after left rotation:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}