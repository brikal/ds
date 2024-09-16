Name    :- Brikal Ketanbhai Kunjadiya
Roll no :- 12
Course  :- MCA
Subject :- Data Structure

20. Write a C program to sort even and odd elements of array separately.

#include<stdio.h>
void main(){
    int i,j,n,low,high,temp;
    printf("enter the number of element in the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("enter the number: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    low=0;
    high=n-1;
    while(low < high){
        while(arr[low]%2==0 && low < high){
            low++;
        }
        while(arr[high]%2!=0 && low < high){
            high--;
        }
        if(low < high){
            temp = arr[low];
            arr[low] = arr[high];
            arr[high] = temp;
            low++;
            high--;
        }
    }
    temp=0;
    for(i=0;i<low;i++){
        for(j=0;j<low-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    temp=0;
    for(i=low;i<n;i++){
        for(j=low;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("sorted array:");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}