#include <iostream>

using namespace std;

int main(){
	float massa;
	float altura;
	float imc;

	cout << "Calculo do IMC " << endl;
	cout << "Informe o seu Peso?(kg)";
	cin >> massa;
	cout << "Informe a altura (m): ";
	cin >> altura;

	imc = massa / (altura*altura);
	cout << "Seu imc vale: " << imc << endl;
}