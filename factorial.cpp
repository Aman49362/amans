#include <iostream>
using namespace std;

int main()
{
    int n;
    int fact = 1;
    cout << "Enter a number: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    cout << endl;
    cout << "The factorial of " << n << " is " << fact;
    cout << endl
         << endl;
    return 0;
}