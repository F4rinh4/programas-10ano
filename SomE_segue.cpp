#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	int numero, quantos, i, soma=0;
	cout << "Quantos n�meros queres somar";
	cin >> quantos;
	for (i = 1;i<=quantos; i++){
		cout << "Digite os n�meros";
		cin >> numero;
		soma = soma + numero;
	}
cout << "A soma �: " << soma ;
}
