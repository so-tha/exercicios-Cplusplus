/*Faça uma função que converta uma quantidade de horas digitadas pelo usuário em minutos e retorne esta quantidade. Faça a leitura da quantidade de horas na função principal.  */

#include<iostream>

using namespace std;

int conversor(int horas, int min){
	 
	 min = horas*60;
	 
	 cout<<horas<<" horas e igual a "<<min<<" minutos"<<endl;
	 return min;
}

int main(){
	
	int m, h;
	
	cout<<"Informe a quantidade de horas: "<<endl;
	cin>>h;
	
	conversor(h,m);
	return 0;
}