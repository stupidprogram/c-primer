#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int a, b, c, d;

    cout << "Please enter 4 numbers :" << endl;
    cin >> a >> b >> c >> d;

    if (a > b && b > c && c > d)
        cout << "Yes,it is." << endl;
    else
        cout << "No,it isn't" << endl;

    return 0;
}
