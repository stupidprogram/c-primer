#include <iostream>
#include <vector>
#include <string>
#include <cstring>

using namespace std;

int main() {
    char s1[] = "hello";
    char s2[] = "world";
    char s3[11];

    strcpy(s3, s1);
    strcat(s3, s2);

    cout << "The result is : \n"
         << s3 << endl;

    return 0;
}
