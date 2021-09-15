/*
Nome : Thais de Cassia Hipolito Souza  
Matricula: 2021008621
Curso: Ciencia da Computação - 1 periodo

Considerando a fórmula para o cálculo da distância entre dois pontos (x1, y1) e (x2, y2):

a) Escreva uma função que receba como parâmetros as coordenadas de dois pontos e retorne a distância entre eles.

 */

#include<iostream>
#include<math.h>

using namespace std;

float distancia(float x,float xx,float y,float yy)
{
	float d = sqrt((xx - x)*(xx - x) + (yy - y)*(yy - y));

	return d;
}
int main(){

	float resultado;
	float x1,x2,y1,y2;

	cout<<"Informe o valor de x1: "<< endl;
	cin>>x1;
	cout<<"Informe o valor de x2: "<< endl;
	cin>>x2;
	cout<<"Informe o valor de y1: "<< endl;
	cin>>y1;
	cout<<"Informe o valor de y2: "<< endl;
	cin>>y2;

	resultado = distancia(x1,x2,y1,y2);

	cout<<"A distancia entre dois pontos é de: "<<resultado<< endl;
	return 0;

}