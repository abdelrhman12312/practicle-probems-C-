/*Write a C function to count the number of 1’s in an unsigned 32-bit
integer.*/

#include<stdio.h>

int TheonesCounter(unsigned long int num);


int main() { 
    unsigned long long int num ;
    
    scanf("%llu" , &num );
    printf("the number of ones = %d\n" , TheonesCounter(num));
   
}

int TheonesCounter(unsigned long int num) { 
        int counter=0;    
            while (num>0)
            {
                int AreuAoneMrsDigit = num%10;
                if(AreuAoneMrsDigit == 1 )
                    counter++;
                
                num = num/10;
            }   
            

        return counter;
}









