#include <iostream>
using namespace std;

// int main()
// {
//     double a = 5;
//     int b = 2;
//     double c = a % b;
//     cout << c;
//     return 0;
// }
// error-->invalid operands of types 'double' and 'int' to binary 'operator%'

int main()
{
    int a = 5;
    int b = 2;
    int sum = a + b;
    int difference = a - b;
    int product = a * b;
    int quotient = a / b;
    int reminder = a % b;
    cout << sum << " " << difference << " " << product << " " << quotient << " " << reminder;
    return 0;
}