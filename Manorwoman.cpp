#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string name;
    int number;
    cout << "Please, provide your polish name" << endl;
    cin >> name;

    number=name.length();

    if (name[number-1]=='a')
        cout << "I think you're a woman" << endl;
    else
        cout << "T think you're a man" << endl;


    return 0;
}
