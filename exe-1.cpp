/*Construa um algoritmo que, tendo como dados de entrada
dois pontos quaisquer no plano, P(x1,y1) e P(x2,y2), escreva a
distância entre eles.
*/

#include <iostream>
#include <math.h>

using namespace std;


int main(){
	float x1 = 0;
	float x2 = 0;
	float y1 = 0;
	float y2 = 0;


	cout << "Informe o primeiro ponto x: " << endl;
	cin >> x1;
	cout << "Informe o segundo ponto x: " << endl;
	cin >> x2;
	cout << "Informe o primeiro ponto y: " << endl;
	cin >> y1;
	cout << "Informe o segundo ponto y: " << endl;
	cin >> y2;

	float pontox = (x2 - x1)*(x2 - x1);
	cin >> pontox;
	float pontoy = (y2 - y1)*(y2 - y1);
	cin >> pontoy;
	float distancia = sqrt(pontox + pontoy);
	cout << "A distancia entre dois pontos no plano é de: " << distancia;

	return 0;
}
