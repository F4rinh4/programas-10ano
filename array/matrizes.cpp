#include <iostream>
#include <cstdlib>
#include <time.h>
#include <locale.h>
#include <string>

using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese");
	srand(time(0));
	int i, j, matriz1[5][3], matriz2[5][3], resultado = 1;
	cout << "escreve os valores de uma matriz, separados por espaço para coluna e enter para linha\n";
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 3; j++)
		{
			cin >> matriz1[i][j];
		}
	}
	cout << "escreve os valores de outra matriz, separados por espaço para coluna e enter para linha\n";
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 3; j++)
		{
			cin >> matriz2[i][j];
		}
	}
	while (resultado != 0)
	{
		system("cls");
		cout << " ----------MENU----------\n";
		cout << "[1] para somar\n";
		cout << "[2] para subtrair\n";
		cout << "[0] para sair\n";
		cin >> resultado;
		switch (resultado)
		{
		case 1:
			for (i = 0; i < 5; i++)
			{
				for (j = 0; j < 3; j++)
				{
					cout << matriz1[i][j] + matriz2[i][j] << " ";
				}
				cout << "\n";
			}
			cout << "carrega em qq sitio para continuar";
			cin.ignore();
			cin.get();
			break;
		case 2:
			for (i = 0; i < 5; i++)
			{
				for (j = 0; j < 3; j++)
				{
					cout << matriz1[i][j] - matriz2[i][j] << " ";
				}
				cout << "\n";
			}
			cout << "carrega em qq sitio para continuar";
			cin.ignore();
			cin.get();
			break;
		case 0:
			cout << "A sair...";
			break;
		default:
			cout << "este valor  não é válido\n";
			cout << "carrega em qq sitio para continuar";
			cin.ignore();
			cin.get();
			break;
		}
	}
	return 0;
}