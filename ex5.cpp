/*Transformar graus celcius em Farenhait
Formula:
f = 1.8*Celsius+32
*/
#include<iostream>

using namespace std;

float Farenhait(float x)
{
	float f = 1.8 * x + 32;
	return f;
}

int main()
{
	float c;
	float resultado;

	cout<<"Informe o Graus em Celsius: ";
	cin>>c;

	resultado = Farenhait(c);
	cout<<"O valor de graus em Farenhait é de: "<<resultado<<endl;
	return 0;
}