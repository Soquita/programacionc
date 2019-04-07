//captura el valor de un producto y entrega su valor con iva

#include <iostream>
#include<stdlib.h>


using namespace std;

int main() {
	float valor, total = 0;

	cout << "Digite el valor: "; cin>>valor;
	total = valor + (valor *0.16);
	cout <<"\nValor con IVA $ " << total;
	return 0;
	system("PAUSE");
}
