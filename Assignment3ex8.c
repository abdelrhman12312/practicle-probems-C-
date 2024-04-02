/*GeomatricSeries*/
#include<stdio.h>
#include<math.h>
double GeomatricSeries( double elemnt) {
    double Valofelemnt=0;
    Valofelemnt = pow(3,elemnt-1) ;
return Valofelemnt;
    }
int main() { 
    double nthterm ; 
  scanf("%lf" , &nthterm );
printf("%d", (int)(GeomatricSeries(nthterm)));

}