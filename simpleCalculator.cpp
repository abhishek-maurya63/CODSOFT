#include <iostream>
using namespace std;
int add(int x, int y)
{
    return x + y;
}
int subtract(int x, int y)
{
    return x - y;
}
int multiply(int x, int y)
{
    return x * y;
}
int divide(int x, int y)
{
    return x / y;
}
int main()
{
    char operand;
    cout << "Choose the operator '+', '-','/' or '*'" << endl;
    cin >> operand;
    int a, b;
    cout << "Enter the 1st number" << endl;
    cin >> a;
    cout << "Enter the 2st number" << endl;
    cin >> b;
    int answer;

    if (operand == '+')
    {
        answer = add(a, b);
    }
    else if (operand == '-')
    {
        answer = subtract(a, b);
    }
    else if (operand == '/')
    {
        answer = divide(a, b);
    }
    else if (operand == '*')
    {
        answer = multiply(a, b);
    }

    else
    {
        cout << "Invalid operator" << endl;
    }

    cout << "Result is: " << answer << endl;
    return 0;
}