#include<iostream>
using namespace std;

double array_sum(double a[] , int array_size ) {
   double sum ;
for(int  i = 0; i<array_size; i++)
    sum+=a[i];
  return sum ;
   }
   void print_array(double a[] , int array_size ) {

          for( int i = 0; i <array_size; i++)
              cout<<a[i]<<endl;
  }

int main() {

  int array_size ;
  cout<<" entre the size of the array "<<endl;
  cin>>array_size;
  double array1[array_size];
  cout<<" entre the elements of the array "<<endl;
  for(int i = 0; i<array_size; i++)
      cin>>array1[i];

   cout<<array_sum(array1 , array_size)<<endl;


}
