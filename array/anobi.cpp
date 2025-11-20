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
	int ano;

	cout << "Qual ano quer saber se é bissexto? ";
	cin >> ano;
	if (ano % 4 == 0  && (ano % 100 != 0 || ano % 400 == 0))
		cout << "O ano " << ano << " é bissexto\n";
	else
		cout << "O ano " << ano << " não é bissexto\n";
	return 0;
}
