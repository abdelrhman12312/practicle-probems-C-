#include<iostream>

  using namespace std ;

  void reverse_array(double a[] , int start , int end1 ) {

      while(start<end1) {

          int temp = a[start];
          a[start] = a[end1];
          a[end1] = temp;
          start++;
          end1--;
      }
  }
   void print_array(double a[] , int array_size ) {

          for( int i = 0; i <array_size; i++)
              cout<<a[i]<<endl;
  }


  int main() {
   cout<<" entre array size " <<endl;
   int array_size ;
   cin>>array_size;
   double arra[array_size];

   for( int i = 0 ; i<array_size;  i++)
      cin>>arra[i];
        cout<<" the unreversed array is "<<endl;
        print_array(arra,array_size);
        cout<<" the reversed array is "<<endl;
        reverse_array(arra , 0 , array_size-1);
        print_array(arra,array_size);
  }
  
