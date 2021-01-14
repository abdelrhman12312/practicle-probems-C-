#include<iostream>

using namespace std;

int main() {

    float x , y ;
    void swap_floats(float x , float y );
    cout<<" entre the  floats " <<endl;
    cin>>x>>y;
    swap_floats(x,y);
}

void swap_floats( float x , float y ) {
   float temp ;
   temp = x ;
   x = y  ;
   y = temp;
  cout<< x << "    " << y ;
}
