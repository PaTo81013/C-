#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int x, y,aux;

    cout << "\n Dame un valor para X:";
    cin >> x;

    cout << "\n Dame un valor para Y:";
    cin >> y;

    aux = x;
    x = y;
    y = aux;

    cout << "\nEl nuevo valor de X: " << x;
    cout << "\nEl nuevo valor de Y: " << y;


}

