// Problem: Given an array of integers, count the frequency of each distinct element and print the result.

// Input:
// - First line: integer n (size of array)
// - Second line: n integers

// Output:
// - Print each element followed by its frequency in the format element:count

// Example:
// Input:
// 5
// 1 2 2 3 1

// Output:
// 1:2 2:2 3:1
#include <stdio.h>
int main(){
    int n;
    int arr[100],i,j,count;
    printf("Enter size of array:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Frequency of elements:\n");
    for(i=0;i<n;i++){
        count=1;
        if(arr[i]!=-1){ // Check if the element is already counted
            for(j=i+1;j<n;j++){
                if(arr[i]==arr[j]){
                    count++;
                    arr[j]=-1; // Mark as counted
                }
            }
            printf("%d:%d ",arr[i],count);
        }
    }
}