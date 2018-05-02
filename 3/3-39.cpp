//1

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    string s1{"hello"};
    string s2{"hello"};
    if (s1 == s2)
    {
        cout << "Equal" << endl;
    }
    else
        cout << "Not Equal" << endl;
    return 0;
}



//2

#include <iostream>
#include <vector>
#include <string>
#include <cstring>

using namespace std;

int main() {
    char s1[] = "hello";
    char s2[] = "hello";

    if(!strcmp(s1, s2))
        cout << "Equal" << endl;
    else
        cout << "Not Equal" << endl;
    
    return 0;
}
