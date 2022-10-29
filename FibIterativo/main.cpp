#include <iostream>
using namespace std;

int main(){
	int elemento;
	long long anterior = 1, atual, proximo = 2;

	cin >> elemento;

	for(int i = 3; i < elemento; i++){
		atual = anterior;
		anterior = proximo;
		proximo = atual + anterior;
	}
	
	cout << "O elemento procurado da sequência é: " << proximo << endl;
	return 0;
}
