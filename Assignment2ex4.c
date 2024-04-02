/* Write a C Function that return the addition or subtraction or
multiplication or division for two numbers. The function should take the
required operation and two numbers as arguments. It also should check
that the input operation is one of those operation that mentioned before
and if not it should return error. The function should be implemented
using switch case.*/


#include<stdio.h>


double calculatior(double num1 , double num2 , char op);


int main() { 

    double num1 , num2 ;
    char op ; 

    scanf("%lf %c %lf" , &num1 , &op , &num2);
    printf("%1.1lf" ,calculatior(num1 , num2 , op ));
    }



double calculatior(double num1 , double num2 , char op ){

    switch (op)
        {
        case '+':   
            return (num1+num2);
            break;

        case'-':       
            return (num1-num2);
            break;
        
        case'/': 
            return (num1/num2);
            break;
        
        case'*': 
            return (num1*num2);
            break;
        
        default:
            printf("wrong input ") ; 
            break;
        }
} 