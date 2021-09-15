/* Crie uma função que calcule o aumento que será dado a um funcionário. Esta função receberá como parâmetro o salário atual do funcionário e a porcentagem de aumento (= 5%). 
A função deverá, ao final, imprimir o novo valor do salário e o valor do aumento.*/

#include<iostream>

using namespace std;

float aumentoSalario(float s, float a){
	float novosalario;
	
	a = (s*5)/100;
	novosalario = s + a;
	
	cout<<"O valor do aumento sera de: "<<a<<" reais e o valor do novo salario sera igual a: "<<novosalario<<endl;
	
	return 0;
}

int main(){
	float salario,aumento;
	
	cout<<"Informe o seu salario: "<<endl;
	cin>>salario;
	
	aumentoSalario(salario,aumento);
	
	return 0;
}