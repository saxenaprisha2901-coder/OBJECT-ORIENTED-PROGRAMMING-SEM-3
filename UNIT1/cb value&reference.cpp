#include <iostream>
using namespace std;

// Call by Value
void incrementValue(int x)
{
    x++;
    cout << "Value inside Call by Value function: " << x << endl;
}

// Call by Reference
void incrementReference(int &x)
{
    x++;
    cout << "Value inside Call by Reference function: " << x << endl;
}

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    cout << "\nOriginal Value: " << num << endl;

    incrementValue(num);
    cout << "Value after Call by Value: " << num << endl;

    incrementReference(num);
    cout << "Value after Call by Reference: " << num << endl;

    return 0;
