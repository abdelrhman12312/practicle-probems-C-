#include<iostream>
using namespace std ;
int main() {
    void digit_name(int number );
    int number ;
    cout<<"enter number 1-9"<<endl;
    cin>>number;
    digit_name(number);

}
void digit_name(int number )  {
    switch(number) {
 case 1 :
   cout<<" one "<<endl ;
  break ;

    case 2 :
   cout<<" two " <<endl;
    break ;

    case 3 :
   cout<<" three " <<endl;
    break;

    case 4 :
   cout<<" four " <<endl;
    break;

    case 5 :
   cout<<" five " <<endl;
    break;

    case 6 :
   cout<<" six " <<endl;
    break;

    case 7 :
   cout<<" seven " <<endl;
    break;

    case 8 :
   cout<<" eight " <<endl;
    break;

    case 9 :
   cout<<" nine " <<endl;
    break;

    default :
      cout<< " digit erorr"<<endl;
      break;
    }


}
