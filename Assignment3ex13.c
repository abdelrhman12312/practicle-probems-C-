/*Write a function to remove a chars but the the ABCs*/

#include<stdio.h>
#include<string.h>


char NewMessage[100];

char *charsRemover(char *message ) { 
   
    NewMessage[strlen(message)];
    
    for(int  i = 0 ; i <strlen(message); i++) { 
    if((message[i] >=65 && message[i]<=90) || (message[i] >=65+32 && message[i]<=90+32))
            NewMessage[i] = message[i]; 
    else { 
            //do nothing  
        }    
    }
    return NewMessage ; 
}


int main() { 
    char message[] = "121353135hhnn1sds33sds";
    char *ptr = NULL;
    ptr = charsRemover(message);
    for (int i = 0; i < strlen(message); i++)
    {
        printf("%c" , *(ptr+i));
    }
    
}