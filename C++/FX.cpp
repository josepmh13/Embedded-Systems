#include "iostream"
#include <stdlib.h>
#include <math.h>
#include <cstdlib>
#include <ctime>
using namespace std;

int AddNumbers(int x, int y){
  return x+y;
}

void Random(){
  for ( int x = 1; x<=10; x++) {
    cout<<rand()<<endl;
  }
}

//VALORES POR DEFECTO
int Sum(int a, int b = 10){
  return a+b;
}

int main(int argc, char const *argv[]) {
  //PROBANDO AddNumbers
  cout<<AddNumbers(22,22)<<endl;

  // PROBANDO RAND()
  cout<<rand()<<endl;
  Random();

  // NUMEROS ALEATORIOS EN UN RANGO ESPECIFICO (1-6)
  for (int i = 0; i<=10; i++){
    cout<<1+(rand()%6)<<endl;
  }


  // VERDADEROS NUMEROS ALEATORIOS EN UN RANGO ESPECIFICO (1-6)
  srand(time(0));
  for (int i = 0; i<=10; i++){
    cout<<1+(rand()%6)<<endl;
  }

  //PROBANDO Sum
  cout<<Sum(22)<<endl;
  cout<<Sum(22,22)<<endl;

  return 0;
}
