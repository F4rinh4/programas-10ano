#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	int i, num[10], contador = 0, soma = 0;
	char ns;
	for (i = 0; i < 10; i++)
	{
		cout << "digite um número";
		cin >> num[i];

	}

	for (i = 0; i < 10; i++)
	{
		if (num[i] < 0)
		{
			contador = contador + 1;
			soma = soma + num[i];
		}
	}
	cout << "queres somar os negativos ou quantos?(q/s)";
	cin >> ns;
	if (ns == 'q')
	{
		cout << "o resultado dos numeros negativos é: " << contador;
	}
	else
	{
		cout << "a soma dos numeros negativos é: " << soma;
	}
	return 0;
}