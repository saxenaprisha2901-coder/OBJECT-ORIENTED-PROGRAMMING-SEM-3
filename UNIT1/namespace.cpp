#include <bits/stdc++.h>
using namespace std;

namespace fruits
{
    void display()
    {
        cout<<"In Fruit Display : Seb hai mere paas";
    }
    void quantity()
    {
       cout<<"Ek hi hai";    
    }
}
namespace rice 
{
    void display()
    {
        cout<<"In Rice Display : Chawal hai yeh";
    }
    void quantity()
    {
        cout<<"Ek boori hai";
    }
}
int main() {
	fruits::display();
	cout<<endl;
	rice::quantity();

}
//wap to create 2 functions. calculate 1 & calculate 2.
//in calc1 take 3 inputs from the userand check whether it is even positive number or not. in cal2 function pass 3 values as a parameter and find the sum of 2 smallest number. 