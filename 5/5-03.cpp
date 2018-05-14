//1

#include <iostream>

using namespace std;

int main()
{
    int sum = 0, i = 49;
    while (++i, i <= 100)
    {
        sum += i;
    }
    cout << sum << endl;
    return 0;
}




//2

#include <iostream>

using namespace std;

int main()
{
   int i = 11;
   while (--i, i >= 0)
   {
       cout << i << "  ";
   }
}
