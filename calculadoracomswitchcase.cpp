#include <iostream>
#include <string>
#include <locale.h>
#include <cstdlib>
#include <time.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	srand(time(0));
	int num1 = 0, num2 = 0, resultado = 0;
	char opcao;
		cout << "Digite o primeiro n�mero: ";
		cin >> num1;	
		cout << "Escolha a opera��o (+, -, *, /): ";
		cin >> opcao;
		cout << "Digite o segundo n�mero: ";
		cin >> num2;
		switch (opcao)
		{
		case '+':
			resultado = num1 + num2;
			cout << "Resultado: " << resultado << "\n";
			break;
		case '-':
			resultado = num1 - num2;
			cout << "Resultado: " << resultado << "\n";
			break;
		case '*':
			resultado = num1 * num2;
			cout << "Resultado: " << resultado << "\n";
				break;
		case '/':
			resultado = num1 / num2;
			cout << "Resultado: " << (num1 / num2) << endl;

		}
	return 0;
}