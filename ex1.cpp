#include <iostream>
#include <math.h>

using namespace std;
#define PI 3.14159 //define o valor padrao de PI, não precisa de ponto e virgula

int main(){
	int raio; 
	float perimetro, area; // reserva um espaço para guardar o que será atribuido a esses valores.
	// variaveis do  mesmo tipo podem ser definidas na mesma linha
	cout << "Digite o raio: ";
	cin >> raio;
	perimetro = 2*PI*raio; // calcula o perimetro
	area = PI*(raio*raio); // calcula a area 

	cout << "O perimetro da circunferencia de raio " <<raio<< "é: " <<perimetro<< endl;
	cout << "A area é: " <<area<< endl;


}