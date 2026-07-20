// Problem: Given a matrix, calculate the sum of its primary diagonal elements. The primary diagonal consists of elements where row index equals column index.

// Input:
// - First line: two integers m and n
// - Next m lines: n integers each

// Output:
// - Print the sum of the primary diagonal elements

// Example:
// Input:
// 3 3
// 1 2 3
// 4 5 6
// 7 8 9

// Output:
// 15

// Explanation:
// 1 + 5 + 9 = 15
#include <stdio.h>
void main(){
    int m,n; 
    printf("Enter the number of rows and columns(seperated by spaces):\n");
    scanf("%d %d",&m,&n);
    printf("Enter %d elements in %d rows(seperated by spaces):\n",m,n);

    int matrix[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    int trace=0; //sum of diagonal elements
    for(int i=0;i<m && i<n;i++){
        trace+=matrix[i][i];
    }
    printf("The sum of primary diagonal elements: %d",trace);
}