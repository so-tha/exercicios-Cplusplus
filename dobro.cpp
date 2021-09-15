	/* Faça uma função que eleve um numero ao cubo */

	#include <stdio.h>
	#include <math.h>
	
	int cubo(int x)
	{
		int valorCubo = 0;
		valorCubo = x*x*x;
		return valorCubo;
	}

	//Para chamar a função criamos uma função main

	int main()
	{
		int c = 0; //contador começa com 0
		c = cubo(4);
		cout << "O cubo de 4 é:" << c << endl;
		return 0;
	}
	//Essa função main só será executada (chamada) caso ja tenha-se criado a função antes.
	