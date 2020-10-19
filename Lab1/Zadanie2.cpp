#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[])
{
    if(argc != 2)
    {
        cout << "Niepoprawna ilosc argumentow" << endl;
        return -1;
    }

    string s = argv[1];
    string sReverse = "";
    for(int i = 0; i < s.length(); i++)
    {
        sReverse = s[i] + sReverse;
    }

    if(sReverse == s)
    {
        cout << "Jest palindromem" << endl;
    }
    else
    {
        cout << "Nie jest palindromem" << endl;
    }
    

    return 0;
}