#include <iostream>
#include <iomanip>
#include <cstring> // for memset()
#include <string>
#include <stack>
using namespace std;

#define NUM_OF_ALPHABET 26

bool isOperator(const char c);
double arithmetic_operation(double a, char opr, double b);

int main()
{
    int n;
    string exp;

    cin >> n >> exp;

    int alpha[NUM_OF_ALPHABET];
    memset(alpha, 0, sizeof(int) * NUM_OF_ALPHABET);

    for (int i = 0; i < n; i++)
    {
        cin >> alpha[i];
    }

    stack<double> s;
    double a, b;

    for (int i = 0; i < exp.size(); i++)
    {
        if (isOperator(exp[i]))
        {
            b = s.top();
            s.pop();

            a = s.top();
            s.pop();

            // calculate, and then push back
            s.push(arithmetic_operation(a, exp[i], b));
        }

        else s.push((double)alpha[exp[i] - 'A']);
    }

    cout << fixed << setprecision(2) << s.top() << '\n';

    return 0;
}

bool isOperator(const char c)
{
    if ((c == '+') || (c == '-') || (c == '*') || (c == '/'))
        return true;

    return false;
}

double arithmetic_operation(double a, char opr, double b)
{
    double out;

    if (opr == '+')
        out = a + b;

    else if (opr == '-')
        out = a - b;

    else if (opr == '*')
        out = a * b;

    else if (opr == '/')
        out = a / b;

    else
    {
        cout << "Error while arithmetic operating!\n";
        exit(-1);
    }

    return out;
}
