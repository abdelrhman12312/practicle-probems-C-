/*Write a program that reads a student grade percentage and prints 
"Excellent" if his grade is greater than or equal 85, 
"Very Good" for 75 or greater; "Good" for 65, "Pass" for 50, "Fail" 
for less than 50. */

#include<stdio.h>

int main() { 
    int grade ; 
    scanf("%d" , &grade); 
    if(grade >= 85 )
        printf("Excellent");
    else if(grade >= 75 && grade <= 85 )
        printf("very good ");
    else if(grade > 50 && grade <=75)
        printf("good");        
    else if(grade == 50 )
            printf("pass");
    else printf("fail");        
        

    return 0 ;
}   