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
	int N,A[1000], somar = 0, altmax=0;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> A[i];
		if (A[i] > altmax)
		{
			somar++;
			altmax = A[i];
		}
	}
	cout << somar;
	return 0;
}