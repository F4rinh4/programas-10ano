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
	int num;
	cout << "Digite um número para euzinho fazer uma contagem decrescente ate o belissimo numero 0\n ";	
	cin >> num;
	for (int i = num; i >= 0; i--)
	{
		cout << i << "\n";
	}
	return 0;
}