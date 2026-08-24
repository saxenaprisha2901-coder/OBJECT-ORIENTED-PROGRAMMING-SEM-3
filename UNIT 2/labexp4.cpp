//write a simple cpp program using auto a range based for loop to traverse and display elements of a collection.
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> numbers = {10, 20, 30, 40, 50};

    cout << "Elements of the collection are:" << endl;

    for (auto num : numbers)
    {
        cout << num << " ";
    }

    return 0;
}