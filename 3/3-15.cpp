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
    return 0;
}
