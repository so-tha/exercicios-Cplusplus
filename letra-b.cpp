/*
Nome : Thais de Cassia Hipolito Souza  
Matricula: 2021008621
Curso: Ciencia da Computação - 1 periodo

b) Escreva um programa em C++(função principal) que capture do teclado as coordenadas dos 2 lados do retangulo (quadrado), 
calcule e imprima o perímetro e a área deste retângulo (quadrado), chamando a função anterior.
P = 2 (b + h)
A = b . h
*/

#include<iostream>
#include <math.h>

using namespace std;

int perimetro(int b, int h){

	int p = 2*(b + h);

	return p; 
}

int area(int ba, int alt){

	int a = ba * alt;

	return a;
}

int main(){
	float peri,base,altura,ar;

	cout<<"Informe o valor da base do retângulo: "<< endl;
	cin>>base;
	cout<<"Informe o valor da altura do retângulo: "<< endl;
	cin>>altura;

	peri = perimetro(base,altura);
	ar = area(base,altura);

	cout<<"O valor do perimetro é de: "<<peri<<" e o valor da area é de "<<ar<<endl;

	return 0;
}