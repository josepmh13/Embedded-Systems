#include "iostream"
#include <stdlib.h>
#include <math.h>
using namespace std;

/*FUNCION IMPLEMENTADA*/
int Fibonacci (int N){
  int xa, x1 ,x2, i;
 if (N==0 || N==1){
   xa=1;
 }else{
   xa = 1;
   x1,x2 = 1;
 i = 0;
   while(i<=N){
     xa = x1+x2;
     x2 = x1;
     x1 = xa;
     i  = i+1;
   }
 }
 return (xa);
}

/*PROGRAMA PRINCIPAL*/
int main( ){
    int f,n;
    cout<<"Numero de Fibonacci"<<'\n'<<"n: ";
    cin>>n;
    f = Fibonacci(n);
    cout<<"El resultado de la serie de Fibonacci es:"<<'\n'<<f<<'\n';
    return 0;
}
