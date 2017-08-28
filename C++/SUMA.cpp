#include "iostream"
#include <string>
using namespace std;

/*FUNCION IMPLEMENTADA*/
int sumar(int a, int b)
{
	return a + b;
}

/*PROGRAMA PRINCIPAL*/
int main()
{
    /*DECLARACION*/
    int a, b, c;
    /*SOLICITA DATOS*/
    cout<<"Introduzca un numero entero 'a': "<<'\n';
    cin >>a;
    cout<<"Introduzca un numero entero 'b': "<<'\n';
    cin >>b;
    c = sumar(a, b);

    cout<<"El valor de suma 'c' es: "<< c<< '\n';
    return 0;
}
