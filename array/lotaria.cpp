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
	int num[5],adivinha[5], certo=0,troca,aux=0,i,j;
	for(i=0; i<5; i++)
	{
		num[i] = rand() % 50 + 1;
		for (j=0; j<i; j++)
		{
			if(num[i] == num[j])
			{
				num[i] = rand() % 50 + 1;
				i--;
			}
		}
	}
	do
	{
		troca = 0;
		for (i = 0; i < 4; i++)
			if (num[i] > num[i + 1]) 
			{
				troca++;
				aux = num[i];
				num[i] = num[i + 1];
				num[i + 1] = aux;
			}
	} while (troca != 0);
	for (i = 0; i < 5; i++)
	{
		cout << num[i] << " ";
	}
	cout << "\nescolhe 5 números diferentes entre 1 e 50:\n";
	for(i=0;i<5;i++)
	{
		cin >> adivinha[i];
	}
 for (i=0; i<5; i++)
 {
	 for (j=0; j<5; j++)
	 {
		 if (adivinha[i] == num[j])
		 {
			 certo++;
		 }
	 }
 }
	if (certo == 5)
	{
		cout << "BRAVO, GANHASTE 1 MILHÃO DE BITCOIN\n";
	}
	if (certo == 0)
	{
		cout << "não ganhaste a loteria e não acertaste nenhum número\n";
	}
	if (certo == 1)
	{
			cout << "não ganhaste a loteria, só acertaste " << certo << " número\n";
	}
	if (certo > 1 && certo < 5)
	{
		cout << "não ganhaste a loteria, só acertaste " << certo << "números\n";
	}
		for(i=0; i<5; i++)
		{
			cout << "O "<< i+1 << "º número era " << num[i] << " \n";
		}
	return 0;
}