#include <iostream>
#include <string>
#include <locale.h>
#include <cstdlib>
#include <time.h>
using namespace std;

int Deposito(int saldo)
{
	setlocale(LC_ALL, "Portuguese");
	srand(time(0));
	string wow[4] = { "Uau! Ainda vais preso!","A nadar em dinheiro, ahn?","Cuidado para não afundares o banco com tanto dinheiro!","Já vi que finalmente tomaste banho e foste a casa da madrinha" };
	int randomNUM, inserir = 0;
	system("cls");
	
	cout << "Insere a quantia que vais por na conta\n";
	cin >> inserir;
	 
	if (inserir > 2000)
	{
		randomNUM = rand() % 4;
		cout << wow[randomNUM];
		cin.ignore();
		cin.get();
	}
	return inserir;
}	
int Debito(int saldo)
{
	setlocale(LC_ALL, "Portuguese");
	srand(time(0));
	int debito;
		system("cls");
		cout << "Quanto que é o débito?\n";
		cin >> debito;
		if (debito > saldo)
		{
			system("cls");
			cout << "Não consegues tirar essa quantia de dinheiro! Tente novamente!\n";
			debito = 0;
			cin.ignore();
			cin.get();
			
		}
		
	return debito;
}
void VerificarSaldo(int saldo)
{
	setlocale(LC_ALL, "Portuguese");
	system("cls");
	cout << "O teu saldo é de " << saldo << " dinheiros\n";
	cin.ignore();
	cin.get();
}
int EnviarDinheiro(int saldo)
{
	
	string nomes[5] = {"Clara", "Afonso","Mateus" , "Joaquim", "Fernando"};
	int randomNUM, enviar;
	setlocale(LC_ALL, "Portuguese");
	system("cls");
	randomNUM = rand() % 5;
	if (randomNUM == 0) 
	{
		cout << "Quanto dinheiro quer enviar à sua amiga " << nomes[randomNUM] <<  " ?\n";
	}
	if (randomNUM > 0)
	{
		cout << "Quanto dinheiro quer enviar ao seu amigo " << nomes[randomNUM] << " ?\n";
	}
	cin >> enviar;
	if (enviar > saldo)
	{
		system("cls");
		cout << "Não consegues tirar essa quantia de dinheiro! Tente novamente!\n";
		enviar = 0;
		cin.ignore();
		cin.get();

	}
	return enviar;
}
int IniciarEcran()
{
	setlocale(LC_ALL, "Portuguese");
	srand(time(0));
	string PIN = {"123"}, tentarPIN;
	int num, randomNUM, menuprincipal = 0, saldo = 1000, dinheiro = 0;
	randomNUM = rand() % 4;
	do
	{
		system("cls");
		cout << "Insira o seu PIN - ";
		cin >> tentarPIN;
		if (tentarPIN != PIN)
		{
			cout << "O PIN está errado! Tente novamente! \n(digite qualquer coisa para continuar)\n";
			cin.ignore();
			cin.get();
		}
	} while (tentarPIN != PIN);
	do
	{
		system("cls");
		cout << "========================================================================================================================\n";
		cout << "[1] Depositar \n";
		cout << "[2] Débito \n";
		cout << "[3] Verificar Saldo\n";
		cout << "[4] Enviar dinheiro\n";
		cout << "[0] sair\n";
		cout << "========================================================================================================================\n";
		cin >> menuprincipal;
	
		switch (menuprincipal) 
		{
			case 1:
				dinheiro = 0;
				saldo+=Deposito(saldo);				
				break;
			case 2:
				saldo -=Debito(saldo);
				break;
			case 3:
				VerificarSaldo(saldo);
				break;
			case 4:
				saldo -=EnviarDinheiro(saldo);
				break;
			case 0:
				break;
			default : 
				system("cls");
				cout << "Digite uma opção válida!\nTente novamente!\n";
				cin.ignore();
				cin.get();
				break;
		}
	} while (menuprincipal != 0);
	
	return 0;
}