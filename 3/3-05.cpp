/* 1 */


#include <iostream>
#include <string>

using namespace std;

int main()
{
   string text,str;
   while(cin >> str)
   {
       text += str;
   }
   cout << text << endl;
    return 0;
}


/* 2 */


#include <iostream>
#include <string>

using namespace std;

int main()
{
   string text,str;
   while(cin >> str)
   {
       text += str + " ";
   }
   cout << text << endl;
    return 0;
}
