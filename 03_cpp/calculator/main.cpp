#include <iostream>
#include "calculator.h"

using namespace std;

int main()
{
    double a, b, result;
    char $;
    cout << "Calculator\n Enter operations in a$b format\n";
    while(true)
    {
        cin >> a >> $ >> b;
        result = calculate(a, $, b);
        cout << a << $ << b << "=" << result << endl;
    }
    
    return 0;

}