#include<iostream>

using namespace std;

void char teste(int opcao){
	switch(opcao) {
		case 1:
			cout<< "Opção selecionada 1" << endl;
			break;
		case 2:
			cout<< "Opção selecionada 2" << endl;
			break;
		case 3:
			cout<< "Opção selecionada 3" << endl;
			break;
		default:
			cout<< "Opção invalída" << endl;
	}
}

int main(){
	int x = 0;
	cout << "Digite um valor inteiro: " << endl;
	cin >> x;
	teste(x);
	
	return 0;
}