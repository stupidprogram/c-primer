#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cout << "Please enter two number:" << endl;
    cin >> a >> b;
    if (a > b)
    {
        cout << b << "  ";
        while (b != a)
        {
            cout << ++b << "  ";
        }
    }
    else if (a < b)
    {
        cout << a << "  ";
        while (a != b)
        {
            cout << ++a << "  ";
        }
    }
    else
    {
        cout << "there is nothing inside";
    }
    cout << endl;
    return 0;
}
