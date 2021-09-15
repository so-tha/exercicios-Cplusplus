#include<iostream>

using namespace std;

float imc(float massa, float altura)
{
	return massa/(altura*altura);

}

int main()
{
	float resultado, fmassa, faltura;
	cout << "Calculo do IMC" <<endl;
	cout << "Informe seu peso (kg): ";
	cin>>fmassa;
	cout<< "Informe a sua altura(m): "
	cin>>faltura;
	resultado = imc(fmassa,faltura);
	cout << "Seu IMC é: "<<resultado<<endl;
	return 0;
}