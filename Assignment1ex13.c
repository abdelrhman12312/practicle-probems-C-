

/*check id the number is prime or not */

#include<stdio.h>

int main() { 
    int number ;
    int NumofDivions =0;
    scanf("%d" , &number);
    for(int i =1; i<=number; i++) {
        if(number%i==0)
            NumofDivions++;
    }
    
    if(NumofDivions == 2 )
        printf("its prime number");
        else
        printf("its not a prime number");

        return 0 ;
}