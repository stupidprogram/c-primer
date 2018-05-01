#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int a[10];
    
    for(auto i = begin(a); i != end(a); ++i)
    {
        *i = 0;
    }
    
    return 0;
}
