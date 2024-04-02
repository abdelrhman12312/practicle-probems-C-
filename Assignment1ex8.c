/*Write a program that reads a positive integer and checks 
if it is a perfect square. */

#include<stdio.h>


int main() { 
int perfectSquare ;
scanf("%d" , &perfectSquare);

    for(int i = 0; i<10; i++)  {
        for(int j=0; j<100; j++){ 
            if(((i*j) == perfectSquare) && i == j ) { 
                printf("the number is a perfect Square ");
                return 0; 
            }
            
        }       

        }
        printf("its not a perfect square ");
        return 0; 
}