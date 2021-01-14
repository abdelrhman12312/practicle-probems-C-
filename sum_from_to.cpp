#include <iostream>


using namespace std;
int main()
{
    int a = 0;
    int b = 0 ;
    int sum_from_to(int a , int b );
    cout<<" enter the numbers of a and b "<<endl;
    cin>>a;
    cin>>b;
    int the_sum = sum_from_to(a,b);
    cout<<"the sum"<<the_sum<<endl;
}
int sum_from_to(int a , int b ) {

      int sum  = 0 ;
if (b<a) {       // if the firest is bigger than the second
    while((b-1)<a) {  //summing from a to b
        sum+=a;
        a--;
    }
}
  else
    while ((a-1) < b) {  //summing useeing while loop
          sum+=a;
          ++a;
   }
   return sum ; //return the sum
}
