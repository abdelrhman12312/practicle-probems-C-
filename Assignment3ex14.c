/*Write a function to concatenate two strings without using
strcat function.*/

#include <stdio.h>
#include <string.h>


void reversreString(char *message) { 
  int n = strlen(message); 
  for(int i = 0 ; i<n/2; i++) { 
      char temp = message[i];
      message[i] = message[n-1-i];
      message[n-1-i] = temp;
  }
}
 int main(int argc, char *argv[])
  
{   char message[]  = "this a string ";
    reversreString(message);
    printf("%s" , message);
  
    return 0;
  }
