#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int a[] = {1,2,3,4,5,6,7,8,9};
    vector<int> vec(begin(a),end(a));

    for (const auto &i : vec)
    {
        cout << i << endl;
    }
    return 0;
}
