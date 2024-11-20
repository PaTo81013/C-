#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    system("color 14");
    int edad;
    char sexo[10];
    float metros;

    cout << " dame tu edad \n";
    cin >> edad;

    cout << " dame tu sexo o genero \n ";
    cin >> sexo;

    cout << " dame tu altura en cm \n";
    cin >> metros;

    cout << " estos son tus datos que me brindaste: ";
    cout << "\n Edad: " << edad;
    cout << "\n Sexo o genero: " << sexo;
    cout << "\n Altura: " << metros;
   


}


