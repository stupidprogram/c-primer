//1

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    int b[10] = {1,2,3,4,5,6,7,8,9,10};
    int flag = 0;
    
    if(sizeof(a) == sizeof(b))
    {
        for(size_t i = 0; i != sizeof(a) / sizeof(a[0]); ++i)
        {
            if(a[i] != b[i])
                ++flag;
        }
    }
    
    if(flag != 0)
        cout << "Not Equal" << endl;
    else
        cout << "Equal" << endl;
    return 0;
}




//2

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<int> a = {1,2,3,4,5,6,7,8,9,10};
    vector<int> b = {1,2,3,4,5,6,7,8,9,10};

    if(a != b)
        cout << "Not Equal" << endl;
    else
        cout << "Equal" << endl;
    return 0;
}
