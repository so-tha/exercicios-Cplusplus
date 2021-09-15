#include<iostream>

using namespace std;


int multiplicar (int x, int y)
{
	return x*y
}
int main()
{
	int resultado, a, b;
	cout<<"Informe o primeiro numero: ";
	cin>>a;
	cout<<"Informe o segundo numero: ";
	cin>>b;
	resultado = multiplicar(a,b);
	cout<< "O resultado é: "<<resultado<<endl;
	return 0;
}