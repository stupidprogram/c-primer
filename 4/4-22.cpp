//1  条件运算符

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    unsigned grade;

    cout << "Please enter the grade :" << endl;
    cin >> grade;
    cout << ((grade > 90) ? "High pass" : (grade > 75) ? "Pass" :(grade > 60) ? "Low pass" : "Fail") << endl;

    return 0;
}



//2 if版本



#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    unsigned grade;

    cout << "Please enter the grade :" << endl;
    cin >> grade;
    if (grade > 90)
        cout << "High pass";
    else if (grade > 75)
        cout << "Pass";
    else if (grade > 60)
        cout << "Low pass";
    else
        cout << "Fail";
    cout << endl;

    return 0;
}
