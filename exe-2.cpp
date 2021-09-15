/*Escreva um algoritmo que leia três números inteiros e
positivos (A, B, C) e calcule a seguinte
expressão:
*/

#include <iostream>
#include <math.h>

using namespace std;

int calculoQuadrado(int a, int b){
	int soma = a + b;
	int quadrado = soma * soma;
	return quadrado;
}

int main(){
	int a,b,c;

	cout << "Informe o valor inteiro de A: ";
	cin >> a;
	cout << "Informe o valor inteiro de B: ";
	cin >> b;
	cout << "Informe o valor inteiro de C: ";
	cin >> c;

	float r = calculoQuadrado(a, b);
	float s = calculoQuadrado(b,c);
	float d = (r + s)/2;

	cout << "O resultado da expressão é de: " << d << endl;
	return 0;
}	