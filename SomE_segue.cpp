#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	int numero, quantos, i, soma=0;
	cout << "Quantos números queres somar";
	cin >> quantos;
	for (i = 1;i<=quantos; i++){
		cout << "Digite os números";
		cin >> numero;
		soma = soma + numero;
	}
cout << "A soma é: " << soma ;
}
