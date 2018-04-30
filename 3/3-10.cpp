#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    string word, str;
    cout << "Please enter a string with punct" << endl;
    cin >> word;
    for (const auto &i : word)
    {
        if (!ispunct(i))
        {
            str += i;
        }
    }
    cout << "The result is : " << str << endl;
    return 0;
}
