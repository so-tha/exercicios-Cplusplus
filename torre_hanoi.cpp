/*
Thais de Cassia Hipolito Souza
2021008621 
Ciência da Computação

Torre de Hanoi

Agora suponha que você tenha n discos, com n pelo menos dois, e que você aprendeu a fazer o problema para qualquer números de discos menor que n. Então, esse algoritmo diz como resolver para n+1:

1) Mova os n-1 primeiros discos de A ate B;
2) Mova o disco n de A ate C;
3) Mova os discos da haste B ate a haste C.

**Usar recursividade
*/
#include<iostream>
#include<math.h>

using namespace std;


void mover_discos(int d, char orig, char desti, char aux){
	
	if(d==1){
		cout<<"Mover disco"<<d<<" de: "<<orig<<" para "<<desti<<endl;	// menor numero de discos de inicio
	}else{
		mover_discos(d-1,orig,aux,desti);  //trocando as posições com ajuda da auxiliar
		cout<<"Mover disco"<<d<<" de: "<<orig<<" para "<<desti<<endl;
		mover_discos(d-1,aux,desti,orig); //trocando da auxiliar para o destino;
	}

}

int main(){
	int discos = 3;
	
	mover_discos(discos,'A','B','C'); //ele vai mover da origem para o destino junto com a auxiliar
	return 0;
}