
/*a  fun that cude a number */
#include<stdio.h>

int cude(int number );
int main() {
    int number ; 
    scanf("%d",&number);
    printf("%d" , cude(number)); 
}

int cude(int number) { 
    return number*number;
}