#include <iostream>
using namespace std;
int main()
{
int a,b,choice,sum,sub,mul,div;
cout <<"\n 1.add \n 2.sub \n 3.mul \n 4.div";
cout << "enter your choice";
cin >> choice;
cout << "enter a & b";
cin >> a>>b;
switch(choice)
{
case 1 : sum = a+b;
cout << "sum = " << sum;
break;
case 2: sub = a-b;
cout << "sub =" << sub;
break;
case 3 :mul = a*b;
cout << " mul =" << mul;
break;
case 4: div = a/b;
cout << "div = " << div;
break;
default : cout << "invalid choice:";
break;
}
}
