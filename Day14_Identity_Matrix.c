// Problem: Write a program to check whether a given square matrix is an Identity Matrix. An identity matrix is a square matrix in which all diagonal elements are 1 and all non-diagonal elements are 0.

// Input:
// - First line: integer n representing number of rows and columns
// - Next n lines: n integers each representing the matrix elements

// Output:
// - Print "Identity Matrix" if the matrix satisfies the condition
// - Otherwise, print "Not an Identity Matrix"

// Example:
// Input:
// 3
// 1 0 0
// 0 1 0
// 0 0 1

// Output:
// Identity Matrix

#include <stdio.h>
void main(){
    int n; //Dimension of the sqare matrix
    int arr[n][n];
    printf("Enter the dimension of the square matrix: ");
    scanf("%d",&n);
    printf("Enter the elements of the matrix:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d", &arr[i][j]);
        }
    }
    int flag=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j && arr[i][j]!=1){
                flag=0;
                break;
            }
            else if(i!=j && arr[i][j]!=0){
                flag=0;
                break;
            }
            else{
                flag=1;
            }
        }
    }
    printf("%s\n", flag ? "Identity Matrix" : "Not an Identity Matrix");
}