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
	int N,K,contador=0,alto=0;
	char floresta;
	cin >> N >> K;
	for (int i = 0; i < N * N; i++)
	{
		cin >> floresta;
		if (floresta == '.')
		{
			contador++;
		}
		if (floresta == '#')
		{
			if (contador > alto)
			{
				contador = alto;
			}
			contador = 0;
		}
	}		
	if (K >= N && K > alto)
	{
		cout << "0";
	}
	else
	{
		cout << "1";
	}
	return 0;
}