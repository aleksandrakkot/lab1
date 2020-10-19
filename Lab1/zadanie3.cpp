#include <iostream>
using namespace std;

int main()
{
    cout << "Podaj wzrost" << endl;
    float wzrost;
    cin >> wzrost;
    cout << "Podaj wage" << endl;
    float waga;
    cin >> waga;

    float BMI = (waga)/(wzrost * wzrost); // masa_ciala [kg], wzrost [m]

    if(BMI < 16)
    {
        cout << "Wyglodzenie" << endl;
    }
    else if(BMI < 16.99)
    {
        cout << "Wychudzenie" << endl;
    }
    else if(BMI < 18.49)
    {
        cout << "Niedowaga" << endl;
    }
    else if(BMI < 24.99)
    {
        cout << "Wartosc prawidlowa" << endl;
    }
    else if(BMI < 29.99)
    {
        cout << "Nadawaga" << endl;
    }
    else if(BMI < 34.99)
    {
        cout << "I stopien tylosci" << endl;
    }
    else if(BMI < 39.99)
    {
        cout << "II stopien tylosci" << endl;
    }
    else
    {
        cout << "Otylosc skrajna" << endl;
    }

}