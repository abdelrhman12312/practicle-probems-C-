/* Write a function which, given a string, converts all uppercase
letters to lowercase, leaving the others unchanged.*/

#include<stdio.h>
#include<string.h>


 void UppertoLower(char *message ) { 
    
    for(int i =0; i<strlen(message); i++) { 
        if(message[i]>=65 && message[i]<=90) {
            message[i] +=32; 
            
        }   
        
    }
 }


int main(){ 
    char message[] = "HELLO 1 2 3  FROM THE OTTHER SIDE "; 
    UppertoLower(message); 
    puts(message);
}