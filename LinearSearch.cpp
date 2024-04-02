#include<stdio.h>
#define SIZE 5 



int LinearSearch(int arr[] , int element , int size) { 
    for(int i =0; i<SIZE; i++) { 
        if(arr[i] == element)
            return i ;
    }   
        return -1 ; 
}

int main() { 
int arr[SIZE] = {1,2,4,7} ;   
int element = 4 ;
printf("%d", LinearSearch(arr , element , SIZE)) ;

}