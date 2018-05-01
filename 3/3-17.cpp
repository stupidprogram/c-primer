#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    string str;
    vector<string> vec;
    cout << "Please enter some strings:" << endl;
    while (cin >> str)
    {
        vec.push_back(str);
    }
    for (auto &i : vec)
    {
        for (auto &j : i)
        {
            j = toupper(j);
        }
    }
    cout << "The result is :" << endl;
    for (const auto &i : vec)
    {
        cout << i << endl;
    }
    return 0;
}
