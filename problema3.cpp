//problema 3 c++

#include<iostream>
#include<iomanip>

using namespace std;

int main () {

    float a,b,c,d,e,f, resultado =0, denominador =0, numerador=0;


  //  printf("Vamos a calcular la siguiente expresion: (a + (b/c))/d + (e/f)")<<endl;
    cout<<"Digite el valor de a: "<<setprecision(4); cin>>a;
    cout<<"Digite el valor de b: "<<setprecision(4); cin>>b;
    cout<<"Digite el valor de c: "<<setprecision(4); cin>>c;
    cout<<"Digite el valor de d: "<<setprecision(4); cin>>d;
    cout<<"Digite el valor de e: "<<setprecision(4); cin>>e;
    cout<<"Digite el valor de f: "<<setprecision(4); cin>>f;

    numerador = (a + (b/c));

    denominador = (d + (e/f));

    resultado = (numerador/denominador);

    cout<< "\n La respuesta de la expresion es: "<<resultado<<endl;



    return 0; 
}