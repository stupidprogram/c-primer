//1
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int number;
    vector<int> vec;
    cout << "Please enter some numbers :" << endl;
    while (cin >> number)
    {
        vec.push_back(number);
    }
    cout << "The result is :" << endl;
    for (size_t i = 0; i != vec.size() - 1; ++i)
    {
        cout << vec[i] + vec[i + 1] << endl;
    }
    return 0;
}




//2
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int number;
    vector<int> vec;
    cout << "Please enter some numbers :" << endl;
    while (cin >> number)
    {
        vec.push_back(number);
    }
    cout << "The result is :" << endl;
    for (size_t i = 0; i != (vec.size() + 1) / 2; ++i)
    {
        cout << vec[i] + vec[vec.size() - i - 1] << endl;
    }
    return 0;
}
