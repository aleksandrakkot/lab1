#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int sumaDzielnikow(int liczba)
{
    int suma = 0;
    for(int i = 1; i < liczba; i++)
    {
        if(liczba % i == 0)
        {
            suma += i;
        }
    }
    return suma;
}

int main()
{
    cout << "podaj a" << endl;
    int a;
    cin >> a;
    cout << "podaj b" << endl;
    int b;
    cin >> b;

    if((sumaDzielnikow(a) == b + 1) && (sumaDzielnikow(b) == a + 1))
    {
        cout << "Liczby sa skojarzone" << endl;
    }
    else
    {
        cout << "Liczby nie sa skojarzone" << endl;
    }
    
}