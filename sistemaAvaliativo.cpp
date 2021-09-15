
#include<iostream>

using namespace std;

void sistemaAvaliativo(){
	int m = [10];
	float n1;
	float n2;
	float n3;
	float nota[10];
	float f = [10];
	int notafinal;
	int media = 0;
	int i = 0;
	int aprovados = 0;
	int reprovado = 0;

		while(i <= 10){
		
		cout<<"Informe seu numero de matricula: "<<endl;
		cin>>m;	
		cout<<"Informe a nota 1: "<<endl;
		cin>>n1;
		cout<<"Informe a nota 2: "<<endl;
		cin>>n2;
		cout<<"Informe a nota 3: "<<endl;
		cin>>n3;
		cout<<"Informe quantas faltas possui: "<<endl;
		cin>>f;
		
		for(int i = 0; i <= 1; i++){
		
		notafinal = n1 + n2 + n3;
		
			if(notafinal >= 60 && f <=20){
			cout<<"-------------------------------------"<<endl;
			cout<<"Matricula = "<<m<<" -> APROVADO"<<endl;
			}else{
			cout<<"-------------------------------------"<<endl;
			cout<<"Matricula = "<<m<<" -> REPROVADO POR FALTA"<<endl;
			}
			
		i++;
		}
		
		cout<<"-------------------------------------------------"<<endl;
		media = (n1 + n2 + n3)/3;
		notafinal = n1 + n2 + n3;
		cout<<"Media: "<<media<<endl;	
		cout<<"Nota final: "<<notafinal<<endl;
		cout<<"-------------------------------------------------"<<endl;			
		}	
}
	
int main(){
	int matricula;
	sistemaAvaliativo(matricula);
	
	return 0;
	
}
