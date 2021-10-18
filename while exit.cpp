#include <iostream>
using namespace std;
int main()
{
    float number;
    float sum = 0;
    string choice ;
    while (1)
    {
        cout << "please enter your  number";
        cin >> number;
        sum =sum+ number;
        cout << "continue ??  yes or exit";
        cin >> choice;
        if (choice == "yes")
            cin >> number;
        if (choice == "exit")
            break;
    }
    cout << "sum = " << sum << endl;
    return 0;
}