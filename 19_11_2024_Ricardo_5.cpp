#include <iostream>
#include<stdio.h>
using namespace std;


int main()
{
    system("color 14");

    float a, b,resultado;

    cout << "dame un valor para a: ";
    cin >> a;

    cout << "dame un valor para b: ";
    cin >> b;

    cout.precision(2);
    resultado = a / b + 1;

    cout << " resultado: " << resultado;
}
