#include <iostream>
#include <string>
#include <locale.h>
#include <cstdlib>
#include <time.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int vetor1[5], vetor2[5], vetor3[10], i;
	for (i = 0; i < 5; i++)
	{
		cout << "Coloque o "<< i+1 <<"º número no 1º vetor \n";
		cin >> vetor1[i];

		cout << "Coloque o " << i + 1 << "º número no 2º vetor \n";
		cin >> vetor2[i];
	}

	for (i = 0; i < 10; i++)
	{
		if (i % 2 == 0)
		{
			vetor3[i] = vetor2[i / 2];
		}
		else {

			vetor3[i] = vetor1[i / 2];
		}
		
	}
	for (i = 0; i < 10; i++) {
		cout << vetor3[i] << "\n";
	}
	return 0;
}
