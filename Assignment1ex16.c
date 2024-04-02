#include<stdio.h>

int main(){
int num;
scanf("%d" , &num);
int RevrsedNumber = 0;

while(num != 0){
RevrsedNumber = RevrsedNumber * 10 + (num % 10);
num = num / 10;}

printf("%d", RevrsedNumber);
return 0;
}