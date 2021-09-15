//função int main que retorne o resultado na função main

#include<iostream>
#include<math.h>

using namespace std;

int delta(float a,float b,float c  ){
	
	float r = 0;
	float a = 0;
	float b = 0;
	float c = 0;

	cout << "Digite A: " << endl;
	cin>>a;
	cout << "Digite B: " << endl;
	cin>>b;
	cout << "Digite C: " << endl;
	cin>>c;


	r = ((b*b) - (4*a*c));

	if(((b*b) - (4*a*c < 0))){
		cout<<"A equação não possui soluções reais";
	} else {
		cout<<"O valor do delta é de: " << r << endl;
	}

	return r;

}

int segundoGrau(float x1, float x2){

	x1 = (-b+(sqrt((b*b) - (4*a*c)))/(2*a));
	x2 = (-b+(sqrt((b*b) - (4*a*c)))/(2*a));
	resu = cout << "As soluções são: " <<x1<< "," <<x2 << endl;

	return resu;
}

int main(){

	float resultadoDelta;
	float resultadoFuncao;

	resultadoDelta = delta();
	resultadoFuncao = segundoGrau();

	return 0;
}
