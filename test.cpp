#include<iostream>
#include<cmath>
#include<math.h>


using namespace std;



void mostrar_matriz(int matriz[][3], int ordem);
int determinante(int matriz[][3], int ordem);
int cofator(int matriz[][3], int ordem, int linha, int coluna);

int main() {
	int matriz[3][3];
	int ordem = 3;

	/*pedindo os valores da matriz para o usuario */
	cout << "\nInforme os numeros da sua matriz:\n\n";
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


int determinante(int matriz[][3], int ordem) {
	int det = 0.0;

	if (ordem <= 3) {
		for (int j = 0; j < ordem; j++) {
			det = det + matriz[0][j] * cofator(matriz, ordem, 0, j);
		}
	} else {
		cout<<"Valor invalido, insira outro";
	}

	cout<<"\nO valor do determinante e: "<<det<<endl;

	return 0;

}


int cofator(int matriz[][3], int ordem, int linha, int coluna) {
	int submatriz[3][3];
	int n = 3 - 1;

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