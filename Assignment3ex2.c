/*Write a function which, given a string, return TRUE if all
characters are distinct and FALSE if any character is repeated
*/

#include<stdio.h>
#include<stdbool.h>
#include<string.h>

bool Isrepeated(char *message) { 
    for(int i = 0; i<strlen(message); i++){
        for(int j =i+1 ; j<strlen(message); j++) {  
            if(message[i] == message[j])
                return false;
  
        }  
    }
                  return true;  
}
int main() { 
    printf("%d",Isrepeated("mesag"));
    return 0 ;
}