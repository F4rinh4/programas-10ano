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
	int resultado,N,M;
	cin >> N >> M;
	resultado = N / M;
	cout << resultado;
	return 0;
}