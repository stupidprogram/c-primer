#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    unsigned grade;
    vector<unsigned> vec(11,0);
    
    cout << "Please enter grade:" << endl;

    while (cin >> grade)
    {
       ++*(vec.begin() + (grade / 10));
    }

    cout << "The result is : " << endl;

    for (const auto &i : vec)
    {
        cout << i << "  ";
    }
    cout << endl;
    
    return 0;
}
