#include<iostream>
#include<math.h>
/*Faça um modulo que troca o valor de uma variavel
a pelo de b e o de b pelo de a */
using namespace std;

int main(){
	float a = 0;
	float b = 0;
	cout << "Informe o valor de a: "
	cin >> a;
	cout << "Informe o valor de b: "
	cin >> b;
	float aux = 0;
	aux = b;
	b = a;
	a = aux;
	cout << " ------------------ após a troca ---------\n"
	cout << "a: "<< a << endl;
	cout << "a: "<< b << endl;

	return 0;
}