/* Write a C function that calculates the required heater activation time
according to the input temperature of water.
- if input temperature is from 0 to 30, 
then required heating time = 7
mins.
- if input temperature is from 30 to 60, then 
required heating time = 5
mins.
- if input temperature is from 60 to 90, 
then required heating time = 3
mins.
- if input temperature is more than 90, then 
required heating time = 1
mins.
- if temperature is invalid (more than 100), return 0
Example:
Input = 10 → output = 7
Input = 35 → output = 5 */


#include<stdio.h>

int heaterActievationTime(int temperature ); 


int main() { 
    int temp; 
    scanf("%d" , &temp);
    printf("the requird heating time is %d " , heaterActievationTime(temp));
}

int heaterActievationTime(int temperature ) { 

    if      (temperature > 0 && temperature <= 30 )
            return 7 ; 
    else if (temperature > 30 && temperature <= 60)        
            return 5 ;    
    else if (temperature > 60 && temperature <=90)
            return 3;
    else if (temperature > 90 && temperature <100)
            return 1;
    else 
        return 0 ;        
}           
