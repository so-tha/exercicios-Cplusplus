/*
Thais de Cassia Hipolito Souza - matricula: 2021008621

(2) Ler um vetor Q de 20 posições (aceitar somente números positivos). Escrever a seguir o valor do maior elemento de Q e a respectiva posição que ele ocupa no vetor.

*/

#include<iostream>

using namespace std;

void printArray(int *array) {
	int lenght = sizeof(array)/sizeof(*array);

	for(int i = 0; i < lenght; i++) {
		cout<<array[i];
	}
}

int main() {
	int Q[20];
	int i = 0;
	int maiorValor = 0;
	int posicaoMaiorValor = 0;


	while(i<20) {

		int valor;

		cout<<"Informe um valor: "<<endl;
		cin>>valor;

		if(valor<0) {
			cout<<"Informe apenas valor positivo!"<<endl;
		} else {
			if(valor>maiorValor) {
				maiorValor = valor;
				posicaoMaiorValor = i;
			}
			Q[i]= valor;
			i++;
		}
	}
	cout<<"Maior valor de Q e:"<<maiorValor<<" na posicao: "<<posicaoMaiorValor<<endl;

	return 0;
}

