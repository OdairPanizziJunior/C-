#include <iostream.h>
#include <conio.h>

int main ()
{
    int n1;
    cout << "\nSALARIO: ";
    cin >> n1;
        
        if (n1 >= 1000)  
           cout << ((n1*0.20) + (n1));
        if ((n1 > 700) && (n1 < 1000))
           cout << ((n1*0.15) + (n1));
        if (n1 <= 700)
           cout << (n1);

 getch();
}
