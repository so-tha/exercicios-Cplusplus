/*Desenvolva um algoritmo que leia duas notas de um aluno, um trabalho (todos os valores entre 0 e 10) e sua frequência, definindo e imprimindo se ele foi aprovado, 
reprovado ou se fará prova final. O aluno será reprovado se faltou mais de 15 aulas. Será aprovado se não for reprovado por falta e sua média for maior que 6,0.
 Caso tenha média menor, deverá fazer prova final. 
O cálculo da média deve ser feito com peso 3 para a primeira prova, 5 para a segunda prova e 2 para o trabalho. */
#include<iostream>
#include<math.h>

using namespace std;

int sistemaEscolar(int nota1, int nota2, int t, int f){

	
	int media = {(3*nota1) + (5*nota2) + (2*t)/3};
	
	if(f < 15 && media > 6){
		cout<<"Parabens voce foi aprovado"<<endl;
	}else if ( f >= 15){
		cout<<"Voce foi reprovado por falta"<<endl;
	}else if (f > 15 && media < 6 ){
		cout<<"Voce tem direito a realizar a prova final"<<endl;
	}
	
	return 0;
}
int main(){
	int n1, n2, trabalho, frequencia;
	
	cout<<"Informe sua primeira nota: "<<endl;
	cin>>n1;
	cout<<"Informe sua segunda nota: "<<endl;
	cin>>n2;
	cout<<"Informe a nota obtida em seu(s) trabalho(s): "<<endl;
	cin>>trabalho;
	cout<<"Informe sua frenquencia: (numero de faltas): "<<endl;
	cin>>frequencia;
	
	sistemaEscolar(n1,n2,trabalho,frequencia);
	
	return 0;
}