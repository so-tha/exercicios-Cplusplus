/*Calcule o salário líquido do funcionário sabendo que este é constituído pelo salário bruto mais o valor das horas extras subtraindo 8% de INSS do total. 
Serão lidos nesse problema o salário bruto, o valor das horas extras e o número de horas extras. Apresentar ao final o salário líquido.*/

#include<iostream>

using namespace std;

int sistemaINSS(int s, int hx){
	int salarioliquido, porcenIN;
	int valorHoras = 5 * hx;
	
	int salarioSemINSS = (s + valorHoras);
	porcenIN = (8*salarioSemINSS)/100;
	salarioliquido = porcenIN + salarioSemINSS;
	
	cout<<"O valor do salario liquido eh de: "<<salarioliquido<<endl;
	return 0;
}

int main(){
	
	int salario, horasex;
	cout<<"Informe o valor de seu salario bruto: "<<endl;
	cin>>salario;
	cout<<"Informe o numero de horas extras feitas: "<<endl;
	cin>>horasex;
	
	sistemaINSS(salario,horasex);
	
	return 0;
}