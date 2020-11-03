/* Escribe un programa que lea de la entrada estandar dos numeros y muestre en la salida estandar
dos numeros y muestre en la salida estandar su suma, resta, multiplicacion y division. */ 

#include<iostream>
#include<iomanip> //paquete necesario para incluir decimales de precision


using namespace  std; 

int main(){

    int suma = 0, multiplicacion = 0;
    double n1, n2, resta = 0, division = 0;

    cout << "Digite un numero: "; cin >> n1;
    cout << "Digite otro numero: "; cin >> n2;

    suma = n1 + n2; 

    resta = n1 - n2;

    multiplicacion = n1 * n2; 

    division = n1 / n2;

    cout << "\n La suma es: "<<suma<<endl;
    cout << "\n La resta es: "<<setprecision(2)<<resta<<endl;  // setprecision es el numero de decimales que necesito
    cout << "\n La multiplicacion es: "<<multiplicacion<<endl;
    cout << "\n La division es: "<<setprecision(2)<<division<<endl;

    return 0;
}

//double o float para que el resultado aparezca con decimales
