/*
Thais de Cassia Hipolito Souza - matricula: 2021008621
Seja a seguinte matriz (6x6) abaixo:

a) Faça uma função que determine a coluna que possui o maior somatório.

b) Faça uma função que determine a linha de maior somatório.
c) Faça uma função que percorra a matriz e quando ele encontrar um valor maior que 10, ele troque
pelo valor 10.

*/
#include<iostream>
#include<cmath>
#include<cstdlib>

using namespace std;

const int qtdLinhas = 6;
const int qtdColunas =6;
int maiorSomaColuna = 0;
int maiorColuna = 0;
int maiorLinha = 0;
int maiorSomaLinha = 0;

float matriz[qtdLinhas][qtdColunas];


void preencher_matriz() {

	for(int linha=0; linha<qtdLinhas; linha++) {
		for(int coluna=0; coluna<qtdColunas; coluna++) {
			cout << "\t" << matriz[linha][coluna];
		}
		cout << "\n";
	}
}


void somaColuna() {
	for(int linha=0; linha<qtdLinhas; linha++) {
		int colunaAtual = 0;
		int soma = 0;
		for(int coluna=0; coluna<qtdColunas; coluna++) {
			soma = soma + matriz[linha][coluna];
			colunaAtual = coluna;
		}
		if(soma>maiorSomaColuna) {
			maiorSomaColuna = soma;
			maiorColuna = colunaAtual;
		}
	}
	cout<<"Maior somatorio das colunas: "<<maiorSomaColuna<<endl;
	cout<<"Coluna: "<<maiorColuna<<endl;
}

void somaLinha() {
	for(int coluna = 0; coluna < qtdColunas; coluna++) {
		int linhaAtual = 0;
		int soma = 0;
		for(int linha = 0; linha < qtdLinhas; linha++) {
			soma = soma + matriz[linha][coluna];
			linhaAtual = linha;
		}
		if(soma>maiorSomaLinha) {
			maiorSomaLinha = soma;
			maiorLinha = linhaAtual;
		}
	}
	cout<<"Maior somatorio das linha: "<<maiorSomaLinha<<endl;
	cout<<"Linha: "<<maiorLinha<<endl;
}


void substituir_elementos() {

	for(int linha=0; linha<qtdLinhas; linha++) {
		for(int coluna=0; coluna<qtdColunas; coluna++) {
			if(matriz[linha][coluna]>10) {
				matriz[linha][coluna] = 10;
			}
		}
	}
}

int main() {

	cout << "\nInforme os numeros da sua matriz (6x6):\n";
	for(int linha=0; linha<qtdLinhas; linha++) {
		for(int coluna=0; coluna<qtdColunas; coluna++) {
			cin>> matriz[linha][coluna];
		}
		cout << "\n";
	}


	preencher_matriz();
	somaColuna();
	somaLinha();
	return 0;
}