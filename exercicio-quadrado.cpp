//Fazer um programa em c++ que calcule a área de um quadrado de lado igual a 5.

	#include <iostream>
	#include <math.h>

	using namespace std;

	int quadrado(int x){
	int a = x*x;
	return a;
	}

	int main(){
		int area = quadrado(5);
		cout <<"A area do quadro é igual a: " << area << endl;
		return 0;
	}