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
	int pinos[4], escolha[4], i, tentativas,j=1,acertos=0;
	for (i = 0; i < 4; i++)
	{
		pinos[i] = rand() % 2;
		
	}
	do
	{	
	for (i = 0; i < 4; i++)
	{
		cout << "\nEscolha o " << i + 1 << "º número ";
		cin >> escolha[i];
		if (escolha[i] == pinos[i])
		{
			acertos++;
		}
	}
	if (acertos ==4)
		{
		
	}
	else
	{
		cout << "\nAcertaste " << acertos << " números";
	}
	tentativas = 0;
	for (i = 0; i < j; i++)
	{
		tentativas++;
	}
	j++;
	acertos = 0;
	}
	while (escolha[0] != pinos[0] || escolha[1] != pinos[1] || escolha[2] != pinos[2] || escolha[3] != pinos[3]);
	cout << "\nPARABÉNS, ACERTASTE OS 4 NÚMEROS, TU ÉS O MASTERMIND";
	cout << "\nNúmero de tentativas: " << tentativas;
	return 0;

}
