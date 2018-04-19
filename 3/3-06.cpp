#include <iostream>
#include <string>

using namespace std;

int main()
{
   string str("hello world!");
   for (auto &i : str)
   {
       i = 'X';
   }
   cout << str << endl;
    return 0;
}
