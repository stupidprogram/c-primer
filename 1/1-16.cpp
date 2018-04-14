#include <iostream>

using namespace std;

int main()
{
    int sum = 0,val;
    cout << "Please enter numbers:" << endl;
    while (cin >> val)
    {
        sum += val;
    }
    cout << "The sum is:" << sum << endl;
    return 0;
}
