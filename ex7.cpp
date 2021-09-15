/*Faça uma função que receba como parâmetro uma nota de uma aluno e, se o valor for maior ou igual a 60, imprimir na tela "APROVADO", se for menor, imprimir "REPROVADO". 
Testar ainda se o valor lido foi maior do que 100 ou menor do que zero. Neste caso, imprimir "NOTA INVÁLIDA". */

    

#include<iostream>

using namespace std;

int sistemaEscolar(int n){
	
	if(n >= 60 && n <= 100){
		cout<<"APROVADO"<<endl;
	}else if(n < 60 && n >= 0){
		cout<<"REPROVADO"<<endl;
	}else if(n > 100 || n < 0){
		cout<<"NOTA INVALIDA"<<endl;
	}
return 0;
}

int main(){
	int nota;
	
	cout<<"Informe a sua nota: "<<endl;
	cin>>nota;
	
	sistemaEscolar(nota);
	
	return 0;
}