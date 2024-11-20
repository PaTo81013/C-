#include <iostream>
using namespace std;

int main()
{
    float practica, teorica, participacion,resultado;

    cout << "\nDame la nota de la practica:";
    cin >> practica;

    cout << "\nDame la nota de la teorica:";
    cin >> teorica;

    cout << "\nDame la nota de la participacion:";
    cin >> participacion;

    practica *= 0.30;
    teorica *= 0.60;
    participacion *= 0.10;

    resultado = practica + teorica + participacion;

    cout << "\nNota final es: " << resultado;

}
