/*Write a C Function that takes one character 
and checks if it alphabet
or not.*/

#include<stdio.h>
#include<ctype.h>
int main() { 
char character ; 
scanf("%c" , &character); 
/*if(character>='A' && character <='Z' || character>='a' && character<='z') 
    printf("its an alphabet");
else 
    printf("its not ");    
}*/

if(isalpha(character) ==0 ) 
    printf("its not alphabet");
else 
    printf("its apla "); 
} 

