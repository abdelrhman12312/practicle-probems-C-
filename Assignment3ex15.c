/* cocrete two strings */

#include<stdio.h>
#include<string.h>


void messagesStrongtoghers(char *messege ,char *message2 )  { 
    messege = messege-1 + message2;
}

int main {
    char *message = "this                        ";
    char *message2 = "message2this is ";
    messagesStrongtoghers(message , message2);
    return 0 ; 
}