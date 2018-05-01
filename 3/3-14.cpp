#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int number;
    vector<int> vec;
    cout << "Please enter some numbers:" << endl;
    while (cin >> number)
    {
        vec.push_back(number);
    }
    return 0;
}
