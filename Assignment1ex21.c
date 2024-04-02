/* printing X in the terminal */


#include<stdio.h>

int main () { 

for (int i = 1; i <= 20; i++) {
        for (int j = 1; j <= 20; j++) {
            if ( j == i || (j == 20 - i + 1)) {
                printf("*");
            }
            else {
                printf(" ");
            }
        }
 
        printf("\n");
    }
 
    return 0;
}