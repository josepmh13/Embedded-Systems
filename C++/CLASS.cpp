#include "iostream"
#include <stdlib.h>
#include <math.h>
#include <cstdlib>
#include <ctime>
using namespace std;

class BankAccount{
    // TRES TIPOS: public, private, protected
  public:
    // CONSTRUCTOR
    /*BankAccount(string nm){
      SetName(nm);
    */

    //string name;
    void SetName(string x){
      name = x;
    }
    string GetName(){
      return name;
    }

    void SayHi(){
      cout<<"Hi Luluisaa"<<endl;
    }

  private:
    string name;
};

int main(int argc, char const *argv[]) {

  // INSTANCIAMOS UNA CLASE O CREARLA --> CLASE + ESPACIO + NOMBRE OBJETO
  BankAccount Test;

  //  PROBANDO EL CONSTRUCTOR
  cout<<Test.GetName()<<endl;

  // ACCEDEMOS AL METODO PUBLICO
  Test.SayHi();

  //Test.name = "HOLAAAAA";
  //cout<<Test.name<<endl;

  Test.SetName("CRACK");

  cout<<Test.GetName()<<endl;

  return 0;
}
