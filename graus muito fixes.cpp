#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	float num, f, c;
	char grau;
	cout << "Insira a temperatura seguida do grau (C/F): ";
	cin >> grau;
	cout << "temperatura ";
	cin >> num;
	if (grau == 'f')
	{
		c = (num - 32) * 5 / 9;
		cout << "" << num << "ºC é " << c << " c\n";
	}
		if
			(grau == 'c')
		{
			f = (num * 9 / 5) + 32;
			cout << "" << num << "ºC é " << f << " f\n";
		}
		return 0;
}