// check the number it is divisible by 5 and 3

#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "enter the number :" << endl;
    cin >> num;
    if (num % 5 == 0 && num % 3 == 0)
    {
        cout << "it is divisible by 5 and 3" << endl;
    }
    else
    {
        cout << "it is not divisible by 5 and 3" << endl;
    }
    return 0;
}