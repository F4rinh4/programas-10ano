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
	int A,L,C,volume;

	cin >> A >> L >> C;
	volume = A * L * C;	
	if (volume >= 50 && A > 3)
	{
		cout << "1";
	}
	else
	{
		cout << "0";
	}
	return 0;
}