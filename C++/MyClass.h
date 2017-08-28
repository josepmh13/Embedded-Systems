// HEADER O ENCABEZADO DE LA CLASE

// -> PROTOTIPOS DE LAS FUNCIONES Y DECLARACION DE VARIABLES

#ifndef MYCLASS_H
#define MYCLASS_H

class MyClass{
  public:
    MyClass(int a, int b);
    void MyPrint();
  private:
    int regVar;
    const int constVar;

};

#endif //MYCLASS_H
