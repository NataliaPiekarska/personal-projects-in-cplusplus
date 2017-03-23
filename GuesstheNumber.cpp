#include <iostream>
#include <windows.h>
#include <time.h>
#include <stdio.h>


using namespace std;

int main()
{
    int liczba; int proba=1; int podana;

    cout << "Hello!" << endl;
    cout << "This program has just randomly chosen one number between 1 and 100 and your job is to guess it!" << endl;
    cout << "Good luck :)" << endl;

    srand(time(NULL));
    liczba=rand()%100+1;

    while (podana!=liczba)
    {
        cout << "Quess the number: ";
        cin >> podana;
        if (podana==liczba)
        {

           cout << "Congratulations! You won! \n Attempt number: " << proba << endl;
           cout << "The number is " << liczba << endl;
        }
          else if (podana>liczba)
          {
             cout << "Your number is too big" << endl;
             cout << "Attempt number: " << proba << endl;
             proba++;
          }

          else if (podana<liczba)
          {
             cout << "Your number is too small" << endl;
             cout << "Attempt number: " << proba << endl;
             proba++;
          }

    }

    getchar();

    return 0;
}
