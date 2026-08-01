// // Problem: Implement a stack data structure using an array with the following operations: push, pop, and display.

// Input:
// - First line: integer n (number of operations)
// - Next n lines: operation type and value (if applicable)
//   - 1 value: push value
//   - 2: pop
//   - 3: display

// Output:
// - For display: print stack elements from top to bottom
// - For pop: print popped element or 'Stack Underflow'

// Example:
// Input:
// 5
// 1 10
// 1 20
// 3
// 2
// 3

// Output:
// 20 10
// 20
// 10

#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int arr[MAX];
int top = -1;

void push(int val){
    if(top == MAX - 1){
        printf("Stack Overflow\n");
        return;
    }
    arr[++top] = val;
}

void pop(){
    if(top == -1){
        printf("Stack Underflow\n");
        return;
    }
    printf("%d\n", arr[top--]);
}

void display(){
    if(top == -1){
        printf("Stack is empty\n");
        return;
    }
    for(int i = top; i >= 0; i--){
        if(i < top) printf(" ");
        printf("%d", arr[i]);
    }
    printf("\n");
}

int main(){
    printf("Enter number of operations: ");
    int n;
    scanf("%d", &n);
    printf("Enter operations:\nChoice: 1)Push\n 2)Pop\n 3)Display");
    for(int i = 0; i < n; i++){
        int op;
        scanf("%d", &op);
        if(op == 1){          // push
            int val;
            scanf("%d", &val);
            push(val);
        } else if(op == 2){   // pop
            pop();
        } else if(op == 3){   // display
            display();
        }
    }
    return 0;
}
