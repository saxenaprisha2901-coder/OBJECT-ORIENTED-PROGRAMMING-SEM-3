#include <bits/stdc++.h>
using namespace std;
class area{
  public: int a,b;
  void input(){
      cin>>a>>b;
  }
  void calculate(){
      cout<<"area = "<<a*b<<endl;
  }
};

int main() {
	area ob;
	ob.input();
	ob.calculate();
}