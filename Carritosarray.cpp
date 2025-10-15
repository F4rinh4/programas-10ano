#include <iostream>
#include <locale.h>
#include <string>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	string carro[3] = { "Volvo", "BMW", "Mercedes" };
	int escolha;
	char sair;
	sair = 'n';
	
	do
	{
		cout << " Escolha um carro (0 a 2): \n";
		cin >> escolha;
		
		if (escolha < 0 || escolha > 2) 
		{
			cout << "Esse Nº é ínvalido";
		}
		else
		{
			cout << " O carro escolhido foi: " << carro[escolha] << "\n";
		}
		cout << " Deseja sair? (s/n)\n";
		cin >> sair;
	} while (sair == 'n');
	return 0;
}
