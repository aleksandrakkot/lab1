#include <iostream>
#include <string>
#include <fstream>
using namespace std;

const int N = 2;
const int M = 3;

void showMacierz(int tab[N][M])
{
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < M; j++)
        {
            cout << tab[i][j] << " ";
        }
        cout << endl;
    }
}

int main(int argc, char *argv[])
{

    fstream plik("dane.txt", ios::in);
    int macierz1[N][M];
    int macierz2[N][M];

    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < M; j++)
        {
            plik >> macierz1[i][j];
        }
    }

    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < M; j++)
        {
            plik >> macierz2[i][j];
        }
    }

    int wynik[2][3];

    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < M; j++)
        {
            wynik[i][j] = macierz1[i][j] + macierz2[i][j];
        }
    }

    showMacierz(macierz1);
    cout << "+" << endl;
    showMacierz(macierz2);
    cout << "=" << endl;
    showMacierz(wynik);
    return 0;
}