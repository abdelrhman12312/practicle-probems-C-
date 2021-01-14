#include<iostream>

using namespace std ;

int find_index(double a[] , int array_size , int search_key) {

    int i ;
for( i =0; i<array_size; i++)
      if(a[i] == search_key)
        break ;
return  i ;
  }

void print_array(double a[] , int array_size ) {

          for( int i = 0; i <array_size; i++)
              cout<<a[i]<<endl;
  }


int main() {
  int array_size ;
  int search_element ;
  cout<<" entre the size of the array "<<endl;
  cin>>array_size;
  cout<<" entre the search elment "<<endl;
  cin>>search_element;
  double array1[array_size];
  cout<<" entre the elements of the array "<<endl;
  for(int i = 0; i<array_size; i++)
      cin>>array1[i];
  cout<<" the index of the elment is " <<find_index(array1,array_size,search_element)<<endl;

}
