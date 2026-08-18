//WAP to find the sum of all the input values provided by the user which may vary on different function call. 
#include <iostream>
#include <cstdarg>
using namespace std;

int sum(int count, ...)
{
    va_list args;
    va_start(args, count);

    int total = 0;

    for (int i = 0; i < count; i++)
    {
        total += va_arg(args, int);
    }

    va_end(args);

    return total;
}

int main()
{
    cout << "Sum = " << sum(3, 10, 20, 30) << endl;
    cout << "Sum = " << sum(5, 1, 2, 3, 4, 5) << endl;
    cout << "Sum = " << sum(4, 100, 200, 300, 400) << endl;

    return 0;
}
//WAP to find the maximum value among the different values provided by the user. 
#include <iostream>
#include <cstdarg>
using namespace std;

int Greatest(int count, ...)
{
    va_list data;
    va_start(data, count);

    int Max = 0;

    for (int i = 0; i < count; i++)
    {
        
       int num = va_arg(data, int);

        if (num > Max)
        {
            Max = num;
        }
    }

    va_end(data);

    return Max;
}

int main()
{
    cout << "Max = " << Greatest(3, 40, 20, 30) << endl;
    cout << "Max = " << Greatest(5, 9, 2, 7, 4, 5) << endl;
    cout << "Max = " << Greatest(4, 100, 600, 500, 400) << endl;

    return 0;
}
a