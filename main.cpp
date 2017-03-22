#include <iostream>
#include <windows.h>
#include <cstdlib>

using namespace std;

int main()
{
    for (int i=10; i>0; i--)
    {
        cout << i;
        Sleep(1000);
        system("cls");
    }

    cout << "BOOOOOM";
    return 0;
}
