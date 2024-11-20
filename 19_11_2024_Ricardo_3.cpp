#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	system("color 14");
	int num, num1;

	cout << "dame un numero";
	cin >> num;

	cout << "dame otro numero";
	cin >> num1;

	int suma = num + num1;
	int resta = num - num1;
	int multiplicacion = num * num1;
	int division = num / num1;


	cout << "La suma es: " << suma << endl;
	cout << "La resta es: " << resta << endl;
	cout << "La multiplicacion es: " << multiplicacion << endl;
	cout << "La division es: " << division << endl;
}

