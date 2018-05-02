//1

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int ia[3][4] = {0,1,2,3,4,5,6,7,8,9,10,11};

    for (int (&i)[4] : ia)
    {
        for (int j : i)
        {
            cout << j << endl;
        }
    }
    return 0;
}



//2

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int ia[3][4] = {0,1,2,3,4,5,6,7,8,9,10,11};

    for (size_t i = 0; i != 3; ++i)
    {
        for (size_t j = 0; j != 4; ++j)
        {
            cout << ia[i][j] << endl;
        }
    }
    return 0;
}



//3

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int ia[3][4] = {0,1,2,3,4,5,6,7,8,9,10,11};

    for (int (*p)[4] = ia; p != ia + 3; ++p)
    {
        for (int *ip = *p; ip !=*p + 4; ++ip)
        {
            cout << *ip << endl;
        }
    }
    return 0;
}
