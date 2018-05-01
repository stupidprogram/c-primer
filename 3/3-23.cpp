#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<int> vec{1,2,3,4,5,6,7,8,9,10};

    for (auto i = vec.begin(); i != vec.end(); ++i)
    {
        *i *= 2;
    }

    cout << "The result is :" << endl;
    for (auto i = vec.cbegin(); i != vec.cend(); ++i)
    {
        cout << *i << "  ";
    }

    cout << endl;
    return 0;
}
