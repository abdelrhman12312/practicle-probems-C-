/*write a function to print the freq of 
chertian charcater in a string */

#include<stdio.h>
#include<string.h>



int CharacterCounter(char *message  , char target) { 
    int counter = 0 ;
      
      for(int i =0; i<strlen(message); i++) {   
        if(message[i] == target)
            counter++;
      }
    return counter;
}


int main() { 
 
    char message[] = "helllllo form the other side dude ";
    printf("%d" , CharacterCounter(message,'l'));   
    }