#include<isostream>
 using namespace std ;
 int main() {
   bool is_prime(int number );
   int prime_number ;
cout<<" enter the number " ;
cin>>prime_number ;
cout<<" is prime ?" <<is_prime(prime_number);
 }
 bool is_prime(int number ) {
     if(n<=1)
         return false ;
         for(int i = 2; i<number; i++)
               if(number%i == 0 )
                   return false;
return true ;
                   
 }
