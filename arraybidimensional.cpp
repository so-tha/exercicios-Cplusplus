#include<iostream>

using namespace std;

int main(){
	
	int matriz [3][4];
	int linha,coluna;
	/* primeiro indice controla as linhas e o segundo as colunas*/
	
	matriz[0][0]=0;
	matriz[0][1]=0;
	matriz[0][2]=0;
	matriz[0][3]=0;
	
	matriz[1][0]=1;
	matriz[1][1]=1;
	matriz[1][2]=1;
	matriz[1][3]=1;
	
	matriz[2][0]=2;
	matriz[2][1]=2;
	matriz[2][2]=2;
	matriz[2][3]=2;
	
	/* um for para cada dimensão*/
	for(linha = 0; linha<3;linha++){
		for(coluna=0;coluna<4;coluna++){
			cout<< matriz[linha][coluna] << " ";
		}
			cout<< "\n";
	}
	
	return 0;
}