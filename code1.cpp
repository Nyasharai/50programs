// to create calculator

#include <iostream>
using namespace std;

int main()
{
    char c;
    float n1, n2;

    cin >> c; // character input like +, -, *, /
    cin >> n1 >> n2;

    switch (c)
    {
    case '+':
        cout << n1 + n2;
        break;

    case '-':
        cout << n1 - n2;
        break;

    case '*':
        cout << n1 * n2;
        break;

    case '/':
        cout << n1 / n2;

    default:
        cout << "Error! operator is not correct";
    }
    return 0;
}