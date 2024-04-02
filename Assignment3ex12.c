/*Write a function to find the length of a string.*/

#include<stdio.h>

int strlen1(char *message ){
    int Counts = 0; 
    for(int i =0; message[i] !='\0'; i++)
        Counts++;
    
    return Counts;
}   


int main() { 
    char message[] = "this a string you know!! "; 
    printf("%d" , strlen1(message));
}