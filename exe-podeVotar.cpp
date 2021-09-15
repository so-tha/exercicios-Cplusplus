#include<iostream>

using namespace std;

void poderVotar(int idade){
	if(idade <= 16){
		cout << "Você pode votar cara";
	}else{
		cout << "Você não pode votar, aguarde mais uns anos";
	}
}

int main(){
	int idade = 0;
	cout << "Informe sua idade: " << endl;
	cin >> idade;
	poderVotar(idade); //chama o procedimento que até então estava vazio
}