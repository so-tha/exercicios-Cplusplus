#include <iostream>
using namespace std;

int soma(float a,float b){
	float s = 0;
	s = a + b;
	return s;
}
int main(){
	float s1 = 0;
	float s2 = 0;
	cout << "Informe um numero: ";
	cin >> s1;
	cout << "Informe outro numero: ";
	cin >> s2;
	cout << s1 << " + " << s2 << " = " << soma(s1,s2);
	return 0;
}