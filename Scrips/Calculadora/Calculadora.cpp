#include <iostream.h>
#include <conio.h>

int main()
{
char op;
float n1, n2;
      
      cout << "\n°°°°°°°°°°°°°°°°°°°°°°°°°°°°";
      cout << "\n°                          °";
      cout << "\n° Calculadora do Odair Jr. °";
      cout << "\n°                          °";
      cout << "\n°°°°°°°°°°°°°°°°°°°°°°°°°°°°";
      cout << "\n°  +     -      *       /  °"; 
      cout << "\n°°°°°°°°°°°°°°°°°°°°°°°°°°°°";
      cout << "\n";
      cout << "\n Digite o primeiro valor  ";
      cin >> n1;
      cout << "\n";
      cout << "\n Digite a operacao      "; 
      cin >> op;
      cout << "\n";
      cout << "\n Digite o segundo valor   ";
      cin >> n2;
      cout << "\n";
      cout << "\n°°°°°°°°°°°°°°°°°°°°°°°°°°°°";
      
      switch (op)
      {
      case '+' : n1 = n1 + n2;
      break;
      case '-' : n1 = n1 - n2;
      break;
      case '*' : n1 = n1 * n2;
      break;
      case '/' : n1 = n1 / n2;
      break;
      }
      cout <<"\n      Resultado = " << n1;

      getch();
} 
