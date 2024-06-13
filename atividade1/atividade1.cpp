#include <iostream>

using namespace std;
int main() {
	float Instalação = 300;
	float Limpeza = 150;
	float Manutenção = 499.99;

	float custoTotal = Instalação + Limpeza + Manutenção;

	cout << "o cliente deverá pagar R$ " << custoTotal;
	
	return 0;
}
