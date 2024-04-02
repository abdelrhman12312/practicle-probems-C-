/* Write a program that computes the nth term of the arithmetic
series:
1, 3, 5, 7, 9, …
Run the program to compute the 100th term of the given series.
An = A1 + (n-1)*d(diffrance)*/

#include<stdio.h>

int AthmitciSeries(int a[] , int elemnt) {
    int Valofelemnt;
return Valofelemnt = a[1] + (elemnt-1)*(a[2]-a[1]);
    }
int main() { 
    int array[3];
  for(int i = 1 ; i<3; i++) { 
        scanf("%d" , &array[i] );
        
  }
printf("%d", AthmitciSeries(array , 100));

}