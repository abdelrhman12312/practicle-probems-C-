/* You are designing a poster which prints out numbers with a unique
style applied to each of them. The styling is based on the number of
closed paths or holes present in a giver number. The number of holes
that each of the digits from 0 to 9 have are equal to the number of closed
paths in the digit. Their values are:
• 1, 2, 3, 5 and 7 = 0 holes.
• 0, 4, 6, and 9 = 1 hole.
• 8 = 2 holes.*/

#include<stdio.h>


int holes(int number);

int main() {
 
    int number;  
    scanf("%d" , &number);
    printf("%d" , holes(number));
}

int holes(int number ) { 
    int holes = 0 ; 


while(number > 0 ) {
            int singleDigit = number%10;
        switch (singleDigit)
        {
        case 1 :
            holes = holes + 0;    
            break;
        case 2 :
            holes = holes + 0;    
            break;
        case 3 :
            holes = holes + 0;    
            break;
        case 5 :
            holes = holes + 0;    
            break;                
        case  7 :
            holes = holes + 0; //mmmmmmmmm
            break;
        
        
        case 0 :
            holes = holes + 1;    
            break;
        case 4 :
            holes = holes + 1;    
            break;
        case 6 :
            holes = holes + 1;    
            break;
        case 9 :
            holes = holes + 1;    
            break;                
        
        
        case 8 :
            holes = holes + 2; 
            break;                
        }   
       number = number/10; 
    }

return holes ; 

}