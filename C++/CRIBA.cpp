#include "iostream"
#include <stdlib.h>
#include <math.h>
using namespace std;

int main(){
    int N;
    cout<<"N: ";
    cin>>N;

    /*INICILIZAMOS EL ARREGLO*/
    int v[N];

    /*CREA EL ARREGLO DE LOS NUMEROS MENORES A "N" DE LA CRIBA*/
    if (N == 0){
      v[0] = 0;
    }else{
      if (N == 1){
        v[0] = 0;
        v[1] = 0;
      }else{
        v[0] = 0;
        v[1] = 0;
        for(int i=2;i<=N;i++){
          v[i] = i;
        }
      }
    }

    /*ALGORITMO DE LA CRIBA, HACE '0' LOS NUMEROS QUE SON PARES
    Y LOS IMPARES LOS MANTIENE*/
    int m, k, j, l;
    for(m=2; v[m]*v[m]<=N; m++){
      if(v[m]!=0){
        for(j=m+1; j<=N;j++){
          if(v[j]!=0 && v[j]%m==0){
            v[j] = 0;
          }
        }
      }
    }


    /*CICLO PARA IMPRIMIR EL ARREGLO*/
    cout<<"\nCriba de Eratóstenes para:"<<N<<"\n\n";
    for(int i=0; i<=N; i++){
        if(v[i] != 0){
        cout << v[i] <<'\t';
        }
    }

    cout<<"\n\n";


    return 0;
}
