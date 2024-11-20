#include <iostream>
using namespace std;

int main()
{
	float a, b, resultado;

	cout << "\nDame un valor para A:";
	cin >> a;
	cout << "\nDame un valor para B:";
	cin >> b;

	resultado = sqrt(pow(a,2) + pow(b,2));

	cout << "\nResultado:" << resultado;

}