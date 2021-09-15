/* Nome : Thais de Cassia Hipolito Souza  
Matricula: 2021008621
Curso: Ciencia da Computação - 1 periodo

/* Construa uma sequência de instruções para calcular o volume de um copo com 12 cm de altura e 6 cm de diâmetro, da seguinte forma:
Declare as variáveis para raio, altura e volume;
Inicialize as variáveis cujo valor é conhecido;
Calcule o valor do volume e armazene-o na variável.

V = Ab × H 
Ab = π × R²

*/

 #include<iostream>
 #include<math.h>

 using namespace std;

 	
 int main(){

	float base;
 	int pi = 3;
 	float raio = 3; //raio é a metade do diametro
 	float volume;
 	float altura = 12;

 	base = pi*(raio*raio);

 	volume = base * altura;

 	cout <<"O volume do copo é de: " << volume << " centimetros" << endl;
 	return 0;
 }
