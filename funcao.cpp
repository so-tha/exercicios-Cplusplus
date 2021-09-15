//Faça uma função conforme a seguinte função matemática: F(x) = x(3) + x (2) - 2*x + 1

	#include <iostream>
	using namespace std;

	int funcaoA(int x){
		int valorFuncao = 0;
		int a = x*x*x ;
		int b = x*x ;
		int c = 2 * x ;
		int y = a + b + c + 1;
		return y;
	}