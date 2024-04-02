/*Given a positive integer z, check if z can be written as 𝑝𝑞, where p
and q are positive integers than 1, if z can be written as 𝑝𝑞 return 1 else
return 0.
Description:
A positive integer that needs to be determined if it can be expressed as a
power of square number.*/

/* Write a C function that returns 1 if the input number is a power of 2
and return 0 if the input number is not power of 2.
For example: 1, 2 and 16 are power of 2.
0, 10 and 30 are not power of 2.*/

#include<stdio.h>
#include<math.h>

int PowerOf2orNot(double number);

int main() { 
int number ; 
scanf("%d" , &number);    
printf("%d" , PowerOf2orNot(number));
}

int PowerOf2orNot(double number ) { 

    while(number>=2) {

        number = sqrt(number);
        
        if(number == 2) { 
            return 1 ;
        }
    }
    return 0 ;
}




