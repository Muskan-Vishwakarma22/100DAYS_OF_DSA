// Problem: Implement push and pop operations on a stack and verify stack operations.

// Input:
// - First line: integer n
// - Second line: n integers to push
// - Third line: integer m (number of pops)

// Output:
// - Print remaining stack elements from top to bottom

// Example:
// Input:
// 5
// 10 20 30 40 50
// 2

// Output:
// 30 20 10

#include <stdio.h>
#define MAX 100 

void main(){
    int stack[MAX], 
    top = -1;
    int n, i, m, x;
    printf("Enter number of elements to push: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++){
        scanf("%d", &x);
        top++;
        stack[top] = x;
    }
    printf("Enter number of elements to pop: ");
    scanf("%d", &m);
    for(i = 0; i < m; i++){
        if(top >= 0){
            top--;
        } else {
            printf("Stack underflow\n");
            break;
        }
    }
    printf("Remaining stack elements from top to bottom: ");
    for(i = top; i >= 0; i--){
        printf("%d ", stack[i]);
    }
}