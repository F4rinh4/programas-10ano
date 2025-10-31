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
	int idade[30],i, contador = 0, contaidade = 0;
	float media = 0, altura[30];
	for (i = 0; i < 30; i++)
	{
		cout << "Qual é a idade da " << i+1 <<"ª criança\n";
		cin >> idade[i];
		cout << "Qual é a ALTURA da"<< i+1 <<"ª criança\n";
		cin >> altura[i];
		contador++;
		media = media + altura[i];

		//cout << "contador: " << contador << "\n";
	}
	media = media / contador;
	cout << "a media das alturas é" << media<<"/n";
	for (i = 0; i < 30; i++)
	{
		if (idade[i] > 13 &&altura[i] < media)
		{
			contaidade++;
			//cout << "contaidade: " << contaidade << "\n";
		}
	}
	cout << "a crianças com menos de 13 anos com altura menor q a media são:\n" << contaidade;
	return 0;
}
