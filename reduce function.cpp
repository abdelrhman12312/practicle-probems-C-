#include<iostream>
using namespace std ;
int GCD( int a , int b );
int main () {

    bool reduce(int num , int deomn);
    int GCD(int a , int b );
    int numerator , denominator ;
    cout<<" enter the demo and num " << endl;
    cin>>numerator>>denominator ;
    if(reduce(numerator,denominator))
        cout<<numerator<< "/" <<denominator<<endl;
    else
        cout<<" fraction erorr" <<endl;


}
bool reduce(int num , int deomn) {
  //dviding by the common divisor to reduce the fraction

  if(deomn) {
  int the_GCD = GCD(num , deomn);
  while((num%the_GCD + deomn%the_GCD) == 0 ) {
    num/= the_GCD;
    deomn/=the_GCD;
    cout<<num << " / " <<deomn<<endl;
    return true ;
      }
  }
  else return false ;
}
int GCD(int a , int b ) { //finding the common devisior
    while(a!=b) {
        if(a>b)
            a-=b;
        else
            b-=a;
    }
  return a;

}
