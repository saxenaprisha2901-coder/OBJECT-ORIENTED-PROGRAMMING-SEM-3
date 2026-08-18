#include <bits/stdc++.h>
using namespace std;

class Salary{
    public :
    int salary(int basic, int da, int hra)
{
    return (basic+da+hra);
}
int salary(int basic, int da)
{
    return (basic+da);
}
int salary(int basic)
{
    return (basic+5000+2000);
}
};
int main() {
    Salary ob;
    cout<<ob.salary(10000,4000,6000)<<endl;
    cout<<ob.salary(10000)<<endl;
    cout<<ob.salary(10000, 8000)<<endl;
    
	
}



#include <bits/stdc++.h>
using namespace std;

void send_mssg(int id, string mssg)
{
    cout << mssg << endl;
}

void send_mssg(string email, string subject, string mssg)
{
    cout << "Subject : " << subject << endl;
    cout << mssg << endl;
}

void send_mssg(long num, string mssg)
{
    cout << mssg << endl;
}

int main()
{
    int id;
    cin >> id;
    cin.ignore();

    string mssg;
    getline(cin, mssg);

    string email;
    cin >> email;
    cin.ignore();          

    string subject;
    getline(cin, subject);

    long num;
    cin >> num;

    send_mssg(id, mssg);
    send_mssg(email, subject, mssg);
    send_mssg(num, mssg);

    return 0;
}