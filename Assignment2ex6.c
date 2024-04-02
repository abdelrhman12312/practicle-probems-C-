/*  Write C Function that converts the any letter from lowercase to
uppercase.*/

#include<stdio.h>
#include <ctype.h>


int main() { 
char ch ; 
scanf("%c" , &ch);     
printf("%c" , toupper(ch));
}