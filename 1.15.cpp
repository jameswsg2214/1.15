// Example program
#include <iostream>
#include <string>
using namespace std;
class sample
{
    public:
    int a,b,c;
    int calc()
{
if(a>b&&a>c)
cout<<a<<" is greater";
else if(b>c)
cout<<b<<" is greater";
else
cout<<c<<" is greater";
}
};
int main()
{
  sample s;
  
  cout << "Enter a three number ";
  cin>>s.a;
  cin>>s.b;
  cin>>s.c;
  s.calc();
}
