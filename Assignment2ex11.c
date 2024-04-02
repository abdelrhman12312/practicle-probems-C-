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


