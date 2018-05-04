//1

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int ia[3][4] = {0,1,2,3,4,5,6,7,8,9,10,11};

    using int_array = int[4];

    for (int_array &i: ia)
    {
        for (int j : i)
        {
            cout << j << "  ";
        }
        cout << endl;
    }
    
    return 0;
}



//2
与上一题中第二个相同



//3

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int ia[3][4] = {0,1,2,3,4,5,6,7,8,9,10,11};

    using int_array = int[4];

    for (int_array *p = begin(ia); p != end(ia); ++p)
    {
        for(int *ip = begin(*p); ip != end(*p); ++ip)
        {
            cout << *ip << "  ";
        }
        cout << endl;
    }

    return 0;
}
