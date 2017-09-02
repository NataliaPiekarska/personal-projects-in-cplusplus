#include <iostream>

using namespace std;

//klasa
class Samochod
{
    public:

    //atrybuty
    string marka;
    string model;
    int rocznik;
    int przebieg;

    //metody
    void wczytaj()
    {
        cout << "Podaj marke samochodu: " << endl;
        cin >> marka;
        cout << "Podaj model samochodu: " << endl;
        cin >> model;
        cout << "Podaj rocznik samochodu: " << endl;
        cin >> rocznik;
        cout << "Podaj przebieg samochodu: " << endl;
        cin >> przebieg;
    }

    void wypisz()
    {
        cout << marka << endl;
        cout << model << endl;
        cout << rocznik << endl;
        cout << przebieg << endl;
    }

};

int main()
{
    //obiekty
    Samochod s1;
    s1.wczytaj();
    s1.wypisz();

    cout << endl << endl;

    Samochod s2;
    s2.wczytaj();
    s2.wypisz();

    return 0;
}
