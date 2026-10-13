// Lab 5_1
#include <iostream>
#include <cmath>

using namespace std;

double f(const double a);   // прототип

int main()
{
    double x;

    cout << "x = "; cin >> x;

    double fx = f(x);

    double numerator = fx + f(1 + fx);
    double denominator = 1 + f(1 + f(x) * f(x)) * f(1 + f(x) * f(x));

    double c = numerator / denominator;

    cout << "c = " << c << endl;

    return 0;
}

double f(const double a)    // визначення
{
    return sin(a) * sin(a) + a * a + 1;
}