#include <iostream>

using namespace std;

int main()
{
    int grade;

    cout << "Please enter your grade:" << endl;
    cin >> grade;
    cout << "Your grade is: ";
    if (grade >= 90)
        cout << "A" << endl;
    else if (grade >= 80)
        cout << "B" << endl;
    else if (grade >= 70)
        cout << "C" << endl;
    else if (grade >= 60)
        cout << "D" << endl;
    else
        cout << "E" << endl;

    return 0;
}
