#include <iostream>
#include <locale.h>
#include <string>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");

	string disciplina[9] = {"Ingl�s","Portugu�s","TLP","ACSO","Cidadania","EDF","Geografia","Matem�tica","AI"};
	string profs[9] = { "Jo�o","Igor","Clara","Manel","Joana","S�rgio","Saramago","Lu�s","Vera" };

	int i;
	char sair;
	sair = 'n';

	do
	{
		cout << "Digite o n�mero da disciplina (0-8): ";
		cin >> i;
		if
			(i >= 0 && i < 9)
		{
			cout << " A Disciplina N�" << i + 1 << ": " << disciplina[i] << " \nE o professor �: " << profs[i] << "\n";

			cout << " Deseja sair? (s/n)\n";
			cin >> sair;
		}
		else
		{
			cout << "N�mero inv�lido!\n";
		}
	}
	while (sair == 'n');
	return 0;
}