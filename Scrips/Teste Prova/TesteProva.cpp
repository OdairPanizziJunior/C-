#include <iostream>
using namespace std;

int main (){
	
	string nome;
	int i;
	int y;
	int z;
	
	cout << "Digite seu nome: ";
	cin >> nome;
	cout << "\nOla " << nome << ", vamos verificar se o valor e par ou impar!\n";		
	cout << "Digite um numero: ";		
	cin >> i;
	if (i % 2 == 0){
		cout << "O numero " << i << " e PAR\n";
		}else{ 
			cout << "O numero " << i << " e IMPAR\n";
			}

	cout << "\nAgora " << nome << ", vamos fazer algumas operacoes matematicas";		
	cout << "\nDigite o primeiro numero: ";
	cin >> y;
	cout << "Digite o segundo numero: ";
	cin >> z;
	cout << "\nA soma de " << y << " + " << z << " da " << (y + z);	
	cout << "\nA multiplicacao de " << y << " * " << z << " da " << (y * z);	
	cout << "\nA subtracao " << y << " - " << z << " da " << (y - z);	
	cout << "\nA divisao de " << y << " / " << z << " da " << (y / z);	
	//nome = 'odair';

	return 0;
		
	
}
