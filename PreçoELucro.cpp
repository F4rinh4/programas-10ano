#include <iostream>
#include <locale.h>
using namespace std;
int main()
int Sandes = 1, Bolos = 0.8, Refrigerantes = 1.5, Caf� = 0.6, custo = 0, venda = 0, lucro = 0, Qsandes,	Qbolos, Qrefrigerantes, Qcaf�;


{
	setlocale(LC_ALL, "Portuguese");
	cout << "Quantas Sandes Compraste";
	 cin >> Qsandes;
 cout << "Quantos Bolos Compraste";
	 cin >> Qbolos;
 cout << "Quantos Refrigerantes Compraste";
	 cin >> Qrefrigerantes;
 cout << "Quantos Caf�s Compraste";
	 cin >> Qcaf�;
 custo = (Qsandes * Sandes) + (Qbolos * Bolos) + (Qrefrigerantes * Refrigerantes) + (Qcaf� * Caf�);
 









	cout << "O lucro obtido foi de: " << (lucro = venda - custo) << endl;

}