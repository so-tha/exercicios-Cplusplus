#include<iostream>

using namespace std;

/*adicionando valores a matriz pelo teclado */

int main() {

	int matriz [3][4];
	int linha,coluna;
	/* primeiro indice controla as linhas e o segundo as colunas*/

	/* adicionando os valores da linha e coluna, perguntando o usuario*/
	for(linha = 0; linha<3; linha++) {
		for(coluna=0; coluna<4; coluna++) {
			cin>> matriz[linha][coluna];
		}
	}
	
	/*Apresentando os valores  */
	for(linha = 0; linha<3;linha++){
		for(coluna=0;coluna<4;coluna++){
			cout<< matriz[linha][coluna] << " ";
		}
			cout<< "\n";
	}
	return 0;
}