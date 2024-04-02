/* Given two integers: L and R, Find the maximal value of A xor B where
A and B satisfy the condition L =< A <= B <= R Constrains: 1 <= L <= R <=
1000
Input format: the input contains two lines first line contains L and next
line contains R.
Output format: The maximum value of A xor B*/

#include<stdio.h> 

int CaltheMaxmuimAnd(int A , int B );
int main() { 
CaltheMaxmuimAnd(10,15);
}


int CaltheMaxmuimAnd(int A , int B ) { 
    int maxXor = 0; 

    for(int i =A; i<B+1; i++) {
        for(int j = i; j<B+1; j++) { 
            
            if( maxXor < (i^j) ) {
                    maxXor = (i^j);
            }

            printf("%d ^ %d = %d \n" , i , j ,i^j );
        }
        
    }
    printf(" the max value of A and B is %d \n" , maxXor);

}