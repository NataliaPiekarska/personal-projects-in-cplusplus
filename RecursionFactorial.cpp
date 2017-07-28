#include <iostream>

using namespace std;

long int silnia (int n)
{
if (n==0) return 1;
else return n*silnia(n-1);
}

int main()
{
    int x;
    cout << "Z jakiej liczby policzyc silnie?" << endl;
    cin >> x;
    cout << "Wynik to " << silnia(x);

    return 0;
}
