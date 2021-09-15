#include <iostream>

using namespace std;

int main(){
	int x;
	int *ptr; //ponteiro
	x = 5;
	ptr = &x;
	cout<<"O valor de x e: "<< *ptr <<endl;
}