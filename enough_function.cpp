#include <iostream>

using namespace std;
int main()
{
   int enough(int goal); //prototybeing the enough function
   int goal;
   cin>>goal;
   int final_val = enough(value);
   cout<<" the smallest possible value is "<<final_val<<endl;
}

 int enough( int goal  ) { //enough funcction
  int n = 0 ;
  int sum  = 0 ;
  while(sum<goal) {
    sum +=n ;
    n++;
    cout<<n<<endl;
  }
  return (n - 1)  ;   //the n counts from 1 to n number
}
