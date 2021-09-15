#include<iostream>

using namespace std;

char numeroMaior(int nota){
	if(nota >= 90){
		return "A"; //quando estamos dentro de uma função usa-se o return inves do cout
	}else {
		if(nota >= 75){
		return "B";
	}else {
		if(nota >= 60){
		return"C";
 	}else{
		return "Sua nota se encaixa nas especificações";
	}
}
int main(){
	int nota = 0;
	
	cout << "Informe sua nota: " << endl;
	cin >> nota;
	cout << "Sua nota é: " << numeroMaior(a);
	return 0;
}
