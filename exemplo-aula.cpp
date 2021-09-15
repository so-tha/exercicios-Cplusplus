#include<iostream>

using namespace std;

float maior(){
	int m = 0;

	if (x > y){
		m = x;
	} 
	else{
		m = y;
	}
	return m;
}
int main(){
	int num1, num2;

	cout << "Programa para verificar qual o maior valor digitado" <<endl;
	cout << "Digite o primeiro valor: " << endl;
	cin >> num1;
	cout << "Digite o segundo valor: " << endl;
	cin >> num2;
	resultado = maior(num1,num2);
	cout << "O maior valor digitado foi: " << resultado << endl;
}