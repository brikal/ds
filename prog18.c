Name    :- Brikal Ketanbhai Kunjadiya
Roll no :- 12
Course  :- MCA
Subject :- Data Structure

18. Write a C program to search an element in an array via binary linear search.

#include<stdio.h>
void main(){
    int i, j, n, temp, x, high, low, mid, flag=0;
    printf("enter the number of element in the array:");
    scanf("%d",&n);

    printf("enter the element: ");
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("enter the element you want to search:");
    scanf("%d",&x);
    // for(i=0;i<n;i++){
    //     printf("%d ",arr[i]);
    // }
    low=0;
    high=n-1;
    while(low<=high){
        mid = (high + low)/2;
        if(arr[mid] == x){
            flag==1;
            printf("element %d found on the location %d", x, mid+1);
            break;
        }
        else if(arr[mid] < x){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    if(low>high && flag ==0){
        printf("%d element not present in the array", x);
    }
}