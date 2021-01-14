#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void displayArray( int sizeofarray , int a[]) {
    for(int j = 0; j<sizeofarray; j++)
       cout<<a[j];
}

int main() {
  int sizeofarray ;
  cin>>sizeofarray;
  int a[sizeofarray];
  for(int i = 0; i<sizeofarray; i++)
       cin>>a[i];


// the reverseation of the array using a for loop
for( int start =0 , end1 = sizeofarray-1 ; start<end1;  start++ , end1-- ) {
    int temp ;
    temp = a[start] ;
    a[start] = a[end1];
    a[end1] = temp;

  }
 displayArray(sizeofarray , a);
    return 0;
}
