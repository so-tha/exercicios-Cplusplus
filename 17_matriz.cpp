/*
17) Faça um programa que calcule o determinante de uma matriz 3x3;

 */

#include<iostream>
#include<cmath>
#include<math.h>
#define MAX 3


using namespace std;

int ordem = 3;
void mostrar_matriz(int matriz[][3], int ordem);
int determinante(int matriz[][MAX], int ordem);
int cofator(int matriz[][MAX], int ordem, int linha, int coluna);

int main() {
	int matriz[3][3];
	int ordem = 3;

	/*pedindo os valores da matriz para o usuario */
	cout << "\nInforme os numeros da sua matriz:\n";
	for (int i = 0; i < ordem; i++) {
		for (int j = 0; j < ordem; j++) {
			cin >> matriz[i][j];
		}
	}
	/*Mostrando os valores */
	cout << "\nMatriz (3x3):\n";
	mostrar_matriz(matriz, ordem);


	/*Mostrando o valor do determinante */
	cout<<"\nO valor do determinante e: "<<determinante(matriz, ordem)<<endl;

	return 0;
}

void mostrar_matriz(int matriz[][3], int ordem) {

	for (int i = 0; i < ordem; i++) {
		for (int j = 0; j < ordem; j++) {
			cout << "\t" << matriz[i][j];
		}
		cout << "\n";
	}
}


int determinante(int matriz[][MAX], int ordem) {

	int det = 0.0;

	if (ordem == 1) {
		det = matriz[0][0];
	} else {
		for (int j = 0; j < ordem; j++) {
			det = det + matriz[0][j] * cofator(matriz, ordem, 0, j);
		}
	}

	return det;
}


int cofator(int matriz[][MAX], int ordem, int linha, int coluna) {
	int submatriz[MAX][MAX];
	int n = ordem - 1;

	int x = 0;
	int y = 0;
	for (int i = 0; i < ordem; i++) {
		for (int j = 0; j < ordem; j++) {
			if (i != linha && j != coluna) {
				submatriz[x][y] = matriz[i][j];
				y++;
				if (y >= n) {
					x++;
					y = 0;
				}
			}
		}
	}

	return pow(-1.0, linha + coluna) * determinante(submatriz, n);
}
