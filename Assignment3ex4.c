/*selection sort algo */


#include<stdio.h>
#define SIZE 5 
void SlectionSort(int a[] , int size ) { 
    for (int i = 0; i < size; i++)
    {
            int min = i ; 
            for(int j = i+1; j<size; j++) {
               if(a[j] < a[min]) 
                        min = j ;   
            }
            int temp = a[min];  //swap
            a[min] = a[i];
            a[i] = temp;
    }
}

int main() { 
    int array[SIZE] = {1 , 2, 5, 7, 3};
    SlectionSort(array , SIZE);
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d" ,array[i]);
    }
    
    
}