//1

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int ia[3][4] = {0,1,2,3,4,5,6,7,8,9,10,11};

    for (auto &i : ia)
    {
        for (auto j : i)
        {
            cout << j << "  ";
        }
        cout << endl;
    }
    
    return 0;
}



//2

跟上一题一样



//3

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int ia[3][4] = {0,1,2,3,4,5,6,7,8,9,10,11};

    for (auto p = begin(ia); p != end(ia); ++p)
    {
        for (auto ip = begin(*p); ip != end(*p); ++ip)
        {
            cout << *ip << "  ";
        }
        cout << endl;
    }

    return 0;
}
