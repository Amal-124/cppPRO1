#include <iostream>
using namespace std;
int main()
{
    double a, b, c;

    cout << "Enter the First number: ";
    cin >> a;
    cout << "Enter the Second number: ";
    cin >> b;
    cout << "Enter the Third Number: ";
    cin >> c;

    if (a > b && a > c)
    {
        cout << "The Highest Number is: " << a << endl;
    }
    else if (b > a && b > c)
    {
        cout << "The Highest Number is: " << b << endl;
    }
    else
    {
        cout << "The Highest Number is: " << c << endl; 
    }

    return 0;
}
