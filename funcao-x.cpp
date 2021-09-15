	#include <iostream>
	using namespace std;

		int cubo(int x){
			int a = x*x*x;
			return a;
		}
		int quadrado(int x){
			int a = x*x;
			return a;
		}
		int main(){
			int valor = 3*cubo(2) + 8*quadrado(2) - 9*x + 7;
			cout << "O valor de F(2) é: " << valor <<endl;
			return 0;
		}