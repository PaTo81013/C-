#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	system("color 14");

	float a, b, c, d, e, f,resultado;

	cout << " \nDame un valor para A: ";
	cin >> a;

	cout << " \nDame un valor para B: ";
	cin >> b;

	cout << " \nDame un valor para C: ";
	cin >> c;

	cout << " \nDame un valor para D: ";
	cin >> d;

	cout << " \nDame un valor para E: ";
	cin >> e;

	cout << " \nDame un valor para F: ";
	cin >> f;

	cout.precision(2);
	resultado = (a + (b / c)) / (d + (e / f));

	cout << "\n Resultado: " << resultado;
}

