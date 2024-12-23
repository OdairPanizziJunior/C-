#include <iostream.h>
#include <conio.h>

int main(){
    int n1;
    cout << "°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°";
    cout << "°                                                                              °";
    cout << "°                               PAR OU IMPAR ???                               °";
    cout << "°                                                                              °";
    cout << "°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°";
    cout << "\n";
    cout << "Digite um numero qualquer para saber se ele e PAR ou IMPAR... ";
    cin >> n1;
    cout << "\nVoce digitou " << n1 << " e ele e:"; 
    cout << "\n";
    cout << "\n";  
    if (n1 % 2)
    { 
    cout << "\n                     00 00    00 000000   00000  000000  ";
    cout << "\n                     00 000  000 00   00 00   00 00   00 ";
    cout << "\n                     00 00 00 00 00   00 00   00 00   00 ";
    cout << "\n                     00 00    00 000000  0000000 000000  ";
    cout << "\n                     00 00    00 00      00   00 00 00   ";
    cout << "\n                     00 00    00 00      00   00 00  00  ";
    }
    else
    { 
    cout << "\n                        000000   00000  000000  ";
    cout << "\n                        00   00 00   00 00   00 ";
    cout << "\n                        00   00 00   00 00   00 ";
    cout << "\n                        000000  0000000 000000  ";
    cout << "\n                        00      00   00 00 00   ";
    cout << "\n                        00      00   00 00  00  ";
    }

      getch();
} 
