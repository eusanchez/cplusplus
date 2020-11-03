//Problema numero 1
/*Escribe un programa que lea de la entrada estandar el precio de un producto y muestre en 
la salida estandar el precio del producto al aplicarle el IVA */

#include<iostream>
#include<iomanip>

using namespace std;


int main(){

    double entrada =0, IVA=0, salida=0; 

    cout<< "Digite el valor del producto: "; cin >> entrada;

    IVA = entrada * 0.13;

    salida = entrada + IVA;

    cout<< "\n El valor final con el IVA del producto es: "<<setprecision(5)<<salida<<endl;

    return 0;

}