/*Print sum of first 100 integers. 
(With data validation) */

#include<stdio.h> 

int main() { 
    int sum=0;
    for(int i =0; i<=100; i++)
        sum+=i;

    printf("%d" , sum);
}