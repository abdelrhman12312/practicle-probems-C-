/* Write a program to make a simple calculator using switch-case. 
The calculator takes the operation  (+ or – or * or /) 
and takes the two input arguments and print the results. */

#include<stdio.h>

int main() { 
    char op ; 
    scanf("%c" , &op);
    switch (op)
    {
    case '+':
    {
        int num1 , num2 ; 
        scanf("%d %d" , &num1 , &num2);
        printf("%d" , (num1+num2));
        break;
    }
    case'-': 
    { 
        int num1 , num2 ; 
        scanf("%d %d" , &num1 , &num2);
        printf("%d" , (num1-num2));
        break;
    }
    case'/': 
    { 
        int num1 , num2 ; 
        scanf("%d %d" , &num1 , &num2);
        printf("%d" , (num1/num2));
        break;
    }
    case'*': 
    { 
        int num1 , num2 ; 
        scanf("%d %d" , &num1 , &num2);
        printf("%d" , (num1*num2));
        break;
    }
    default:
        break;
    }

}