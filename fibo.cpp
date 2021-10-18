#include <iostream>
using namespace std;
int main() 
{
    int x = 1, g = 1, z, k, n;
    cout << " how many number for fibonachi ? : ";
    cin >> n;
    n -= 2;
    cout << x << " " << g << " ";
    z = x + g;
    cout << z << " ";
    for (k = 1; k <= n - 1; k++) {
        x = g;
        g = z;
        z = x + g;
        cout << z << " ";
    }
    return 0;
}