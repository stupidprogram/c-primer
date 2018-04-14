#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cout << "Please enter two numbers:" << endl;
    cin >> a >> b;
    if (a > b)
    {
        for (int i = b; i <= a; ++i)
        {
            cout << i << "  ";
        }
    }
    else
    {
        for (int i = a; i <= b; ++i)
        {
            cout << i << "  ";
        }
    }
    cout << endl;
    return 0;
}
