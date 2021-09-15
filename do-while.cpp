#include<iostream>

using namespace std;

const float PI = 3.1415;

float calculoAreaCirco(){
	
	float raio = 0;
	
	do{
		cout<<"Informe o valor do raio: "<<endl;
		cin>>raio;
		
	}while(raio < 0);
	
	float area = PI * raio;
	return area;
}
int main(){
	calculoAreaCirco();
	return 0;
}