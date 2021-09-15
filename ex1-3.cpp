/* Faça uma função que receba como entrada dois numeros, e 
retorne o maior deles. Depois chame sua função na main(); */

#include<iostream>
#include<math.h>

using namespace std;

float maiorNumero(float a, float b){
	float maior;
	if(a >= b){
		return a; 
	}else{
		return b;
	}
	return maior;
}

int main(){
	float a = 0;
	float b = 0;
	cout << "Informe o primeiro numero: " << endl;
	cin >> a;
	cout << "Informe o segundo numero: " << endl;
	cin >> b;
	cout << "O maior deles é: " << maiorNumero;
	return 0;
}