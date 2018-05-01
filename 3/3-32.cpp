//1

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int a[10];
    int b[10];

    for (size_t i = 0; i != 10; ++i)
    {
        a[i] = i;
    }

    for (size_t i = 0; i != 10; ++i)
    {
        b[i] = a[i];
    }
    return 0;
}




//2

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int a[10];
    vector<int> b(10);

    for (size_t i = 0; i != 10; ++i)
    {
        a[i] = i;
    }

    for (size_t i = 0; i != 10; ++i)
    {
        b[i] = a[i];
    }
    
    return 0;
}
