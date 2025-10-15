#include <iostream>
#include <locale.h>
#include <string>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");

	string disciplina[9] = {"Inglês","Português","TLP","ACSO","Cidadania","EDF","Geografia","Matemática","AI"};
	string profs[9] = { "João","Igor","Clara","Manel","Joana","Sérgio","Saramago","Luís","Vera" };

	int i;
	char sair;
	sair = 'n';

	do
	{
		cout << "Digite o número da disciplina (0-8): ";
		cin >> i;
		if
			(i >= 0 && i < 9)
		{
			cout << " A Disciplina Nº" << i + 1 << ": " << disciplina[i] << " \nE o professor é: " << profs[i] << "\n";

			cout << " Deseja sair? (s/n)\n";
			cin >> sair;
		}
		else
		{
			cout << "Número inválido!\n";
		}
	}
	while (sair == 'n');
	return 0;
}