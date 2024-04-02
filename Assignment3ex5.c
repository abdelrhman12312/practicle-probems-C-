/* rite a C function to return the index of FIRST occurrence of a
number in a given array. Array index start from 0. If the item is not
in the list return -1. (Linear Search Algorithm)
Example:
Array = {1,2,3,4,4,4}
The required number is 4 it should return 3*/

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