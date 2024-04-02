/* Write a C Function that display Prime Numbers between Intervals (two
numbers) by Making Function.*/

#include<stdio.h>

int prime(int number );
int main() { 
    int start , end ; 
    scanf("%d %d" , &start , &end);
    for(int i = start; i<end; i++){
        if (prime(i) == 0 )
        {
            // do nothing 
        }
        else { 
            printf("%d\n" , prime(i));
        }
    }
}   

int prime(int number) { 
    
    int divisors = 0; 
    
        
        for(int j = 1 ; j<=number; j++) { 
        if(number%j == 0 )
            divisors++;
    }
    if(divisors == 2 ) {
        return number;
    }

   else { 
    return 0000;
   }     

}