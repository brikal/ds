Name    :- Brikal Ketanbhai Kunjadiya
Roll no :- 12
Course  :- MCA
Subject :- Data Structure

22. Write a C program to right rotate an array.

#include <stdio.h>
void main() {
    int size, n,a;

    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    int arr[size];

    for (int i = 0; i < size; i++) {
        printf("Enter the elements of the array: ");
        scanf("%d", &arr[i]);
    }

    printf("Enter the number of rotations: ");
    scanf("%d", &n);
    n = n%size;
    int temp[size];
    //print the array
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    //copying the array into temparary array
    for (int i = 0; i < size; i++) {
        temp[i] = arr[i];
    }
    //shifting the varray value by n
    for (int i = size-n-1; i >= 0; i--) {
        arr[i+n] = arr[i];
    }
     for (int i = 0; i < size; i++) {
        printf("%d ", temp[i]);
    }
    //   reassing the corect value
    a=size-1;
    for (int i = 0; i < n; i++) {
        arr[i] = temp[a];
        a--;
    }
    printf("\nArray after right rotation:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}