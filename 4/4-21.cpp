//1

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<int> vec{0,1,2,3,4,5,6,7,8,9};

    for (auto &i : vec)
    {
        if (i % 2 != 0)
            i *= 2;
    }
    for (const auto &i : vec)
    {
        cout << i << "  ";
    }
    cout << endl;
    
    return 0;
}




//2  只翻倍输出，不改变vector中的值

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<int> vec{0,1,2,3,4,5,6,7,8,9};

    for (const auto &i : vec)
    {
        cout << (i % 2 ? i * 2 : i) << "  ";
    }
    cout << endl;
    
    return 0;
}
