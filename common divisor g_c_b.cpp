#include <iostream>


using namespace std;
int main()
{
    int g_c_d(int a , int b );
int a , b ;
cin>>a>>b;
int the_gcdis = g_c_d(a,b);
cout<<" the GCD is " <<the_gcdis<<endl;


}
int g_c_d( int a , int b ) {

while(a!=b) {   //subtracting the smallest number from the largest one
    if(a>b)
        a-=b;
    else b-=a;
      }
   return a ;
 }
