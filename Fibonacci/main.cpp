#include <iostream>

using namespace std;


long long int fib(int a);

int main(void){
	int limite;
	cout << "Digite o N numero da sequencia de fibonacci que quer encontrar" << endl;
	cin >> limite;
	cout << fib(limite)  << endl;
	return 0;
}

long long int fib(int a){
	if(a == 0 || a == 1){
		return a;
	}
	
	else{
		return fib(a - 1) + fib(a - 2);
	}
}

