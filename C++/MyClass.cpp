// SOURCE O FUENTE DE LA CLASE
// -> IMPLEMENATCION DE LA CLASE Y SUS METODOS

#include "MyClass.h"
#include <iostream>

MyClass::MyClass(int a, int b)
:regVar(a),constVar(b){
  cout<<regVar<<endl;
  cout<<constVar<<endl;
}

void MyClass::MyPrint(){
  cout<<"Hello world!"<<endl;
}
