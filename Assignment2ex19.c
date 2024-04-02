/* Write a C function that returns 1 if the input number is a power of 2
and return 0 if the input number is not power of 2.
For example: 1, 2 and 16 are power of 2.
0, 10 and 30 are not power of 2.*/
/*if logab = x, then ax = b.*/
/*then x = logb/loga*/
#include<stdio.h>
#include<math.h>

double logWithBase(double base, double x);
int Ispowerof3ornot(double number );

int main() { 
    double number ; 
    scanf("%lf",&number);
    printf("%d\n" , Ispowerof3ornot(number));
}

double logWithBase(double base, double x) {   //making a custom base loga b 
    return log(x) / log(base);
}

int Ispowerof3ornot(double number ) { 
    
    double power = logWithBase(3,3)/logWithBase(number,3);
        
        //printf("%lf %d the power\n " , power , (int)power );
        //printf("%lf power cal \n" , ((int)power) - power);
            
            if ((((int)power)) - power  == 0 ) //cheack the number is exact or it contains a float 
            {
                    return 1 ;
            }
                else 
                    return 0 ;    
}
