/*Write a C function that use the bubble sort algorithm to sort
an integer array in ascending order (search for the bubble sorting
algorithm).
*/

#include<stdio.h>
#define SIZE 5

void bubbleSort(int arr[] , int size){
    
    for(int i =0; i<size; i++) { 
        
        for(int j =i+1; j<size; j++){
            
            if(arr[i] > arr[j]) {
               
                int temp = arr[i];  //swap the element of the array 
                arr[i] = arr[j];
                arr[j] = temp; 
            }
        }
    }
}

int main() { 
        int array[SIZE] = {1 , 5 , 2 , 3  , 6};
        bubbleSort(array , SIZE);
    
    for(int i = 0; i<SIZE; i++){
        printf("%d",array[i]);
    }
}