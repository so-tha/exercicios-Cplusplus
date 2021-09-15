/* Nome : Thais de Cassia Hipolito Souza  
Matricula: 2021008621
Curso: Ciencia da Computação - 1 periodo 
*/

/*
Exercicio. Dado que o salário é R$ 500,00. Temos a seguinte tabela de 
Imposto de renda:
● Faça uma função que receba o salario de um cidadão e calcule o valor do 
imposto de renda que ele deverá pagar. Depois chame sua função na main.
– Dica: Parametros de sua função
● Float salario
Salários Percentual pago
Até 3 salarios 0%
De 3 a 6 salários 12%
De 6 a 8 20%
Acima de 8 27 

*/

#include<iostream>

using namespace std;

float impostoRenda(float salario){
	float imposto = 0;

	if(salario <= 1500){
		imposto = salario;
		cout<<"Inserto de declarar imposto de Renda"<<endl;
	}else if(salario > 1500 && salario <= 3000){
		imposto = (salario*12)/100;
		cout<<"O Percentual pago de Imposto será de " << imposto << " reais" << endl;
	}else if(salario > 3000 && salario <= 4000){
		imposto = (salario*20)/100;
		cout<<"O Percentual pago de Imposto será de " << imposto << " reais" << endl;
	}else{
		imposto = (salario*27)/100;
		cout<<"O Percentual pago de Imposto será de " << imposto << " reais" << endl;
	}
		return imposto;
}

int main(){
	float salario = 0;
	
	cout<<"Informe o seu salario: "<< endl;
	cin>>salario;

	impostoRenda(salario);

	return 0;
}

