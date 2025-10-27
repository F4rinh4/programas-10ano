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
	int aux1;
	int bolha[10] = { 15,2,53,4,1,17,5,23,45,19 };
	do {
		aux1 = 0;
		for (int i = 0; i < 9; i++)
			if (bolha[i] > bolha[i + 1]) {
				aux1 = bolha[i];
				bolha[i] = bolha[i + 1];
				bolha[i + 1] = aux1;
			}
		if (aux1 == 0) {
			for (int i = 0; i < 10; i++)
				cout << bolha[i] << " ";
			break;
		}
	} while (aux1 != 0);
	return 0;
}