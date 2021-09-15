/* Nome : Thais de Cassia Hipolito Souza  
Matricula: 2021008621
Curso: Ciencia da Computação - 1 periodo 
*/

/*Exercício Faça uma função que verifique que receba uma idade e verifique 
se esta apto ou não a votar. Depois chame na main() */

#include<iostream>

using namespace std;

void poderVotar(int idade){
	if(idade >= 16){
		cout << "Você está apto a votar";
	}else{
		cout << "Você não possui idade o suficiente para votar, aguarde alguns anos!";
	}
}

int main(){
	int idade = 0;
	cout << "Informe sua idade: " << endl;
	cin >> idade;
	poderVotar(idade); 

	return 0;
}