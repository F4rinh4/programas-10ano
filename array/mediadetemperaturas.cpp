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
	int i;
	float temperaturas[12], media=0;
	string meses[12] = { "janeiro", "fevereiro", "março", "abril", "maio", "junho", "julho", "agosto", "setembro", "outubro", "novembro", "dezembro" };
	for (i = 0; i < 12; i++)
	{
		cout << "Diga a temperatura média do mês de " << meses[i] << ": ";
		cin >> temperaturas[i];
	}
	for (i = 0; i < 12; i++)
	{
		media = media + temperaturas[i];
	}
	media = media / 12;
	cout << "a média anual de temperaturas é: " << media << "°C" << "\n";
	return 0;
}	