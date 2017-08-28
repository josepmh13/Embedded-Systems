#include "iostream"
#include <stdlib.h>
#include <math.h>
#include <string.h>
using namespace std;

int main()
{
    /*INICILIZAMOS VARIABLES*/
    cout<<"Ingrese el numero de la diagional:"<<'\n'<< "N: ";
    int N;
    cin>>N;
    int i,j,m,e,l,k;
    char v[N][N];
    m = (N-1)/2;

    /*HACEMOS UN CUADRADO CON ASTERISCOS*/
    for(i=0; i<N;i++){
      for(j=0;j<N;j++){
      v[i][j] = '*';
      }
    }

    /*HACEMOS EL ROMBO CON ASTERISCOS QUTANDO LAS ESQUINAS*/
    /*A.TRIANGULO SUPERIOR*/
    for(k=0; k<=m; k++){
      e = m-k-1;
        for(l=0; l<=e; l++){
          v[k][l] = v[k][N-1-l]= ' ';
        }
    }
    /*B.TRIANGULO INFERIOR*/
    for(k=m; k>0; k--){
      e = m-k;
        for(l=0; l<=e; l++){
          v[N-k][l] = v[N-k][N-1-l]= ' ';
        }
    }


    /*IMPRIMIR ROMBO OBTENIDO*/
    cout<<"\n";
    for(i=0; i<N;i++){
      for(j=0;j<N;j++){
      cout<<v[i][j];
      if(j==(N-1)){
          cout<<"\n";
        }
      }
    }
    cout<<"\n";

    return 0;
}
