#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<int> vec(10,42);
    int a[10];

    for (size_t i = 0; i != 10; ++i)
    {
        a[i] = vec[i];
    }
    
    return 0;
}
