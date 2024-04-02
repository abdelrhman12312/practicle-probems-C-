#include<stdio.h>

#define SIZE 10 


int main () { 
s
    int max_ele = 0 ;
    int arr[SIZE];
    
    for (int i = 0; i < SIZE; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for(int i = 0 ; i<SIZE; i++) { 
        if(max_ele<arr[i])
            max_ele = arr[i];
    }
    printf("%d" , max_ele);
}