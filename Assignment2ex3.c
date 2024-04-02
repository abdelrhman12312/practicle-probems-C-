/*Write a C Function that check if 
the number if positive or negative.*/

#include<stdio.h>


void NgativeOrPostive(int number );
int main() { 
int number;
scanf("%d" , &number); 

}
void NgativeOrPostive(int number ) {
if(number > 0 ) 
    printf("its pos");
else if (number < 0)
    printf("its neg");
else 
    printf("not neg or pos ");
}
