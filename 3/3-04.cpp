/* 1 */

#include <iostream>
#include <string>

using namespace std;

int main()
{
   string str1, str2;
   cout << "Please enter two words:" << endl;
   cin >> str1 >> str2;
   if (str1 > str2)
       cout << str1 << endl;
   else if (str1 < str2)
       cout << str2 << endl;
   else
       cout << "same" << endl;
    return 0;
}


/* 2 */


#include <iostream>
#include <string>

using namespace std;

int main()
{
   string str1, str2;
   cout << "Please enter two words:" << endl;
   cin >> str1 >> str2;
   if (str1.size() > str2.size())
       cout << str1 << endl;
   else if (str1.size() < str2.size())
       cout << str2 << endl;
   else
       cout << "same" << endl;
    return 0;
}
