// wap to display a greeting msg to user according to the name 
// and if not provided use default value
#include <bits/stdc++.h>
using namespace std;
class test{
    public :
    void greeting(string name = "John")
    {
        cout<<"Greetingsss "<<name<<endl;
    }
};
int main() {
	test ob;
	ob.greeting();
	ob.greeting("Prisha");

}

// wap to calculate the salary of an employee as basic+(10%basic)hra 
// +(2% basic)da. if no value given , assumed hra as 500 and da as 150 rs.

#include <bits/stdc++.h>
using namespace std;

class Salary {
public:
    void salary(float basic, float hra = 500, float da = 150) {
        cout << basic + (basic * 0.1 + hra) + (basic * 0.02 + da) << endl;
    }
};

int main() {
    Salary ob;
    ob.salary(10000, 200, 800);
    ob.salary(10000, 200);
    ob.salary(1000);
}