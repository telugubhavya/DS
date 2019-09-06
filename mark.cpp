#include <iostream>
using namespace std;
struct student
{ 
int marks[10];
float total,avg;
};
struct student s;
int main()
{
int i;
cout << "enter the marks of a student ";
for (i = 0;i <= 9; i++)
{
cin >> s.marks[i];
}
for (i = 0; i <= 9; i++)
{
s.total= s.total + s.marks[i];
}
for(i = 0;i<=9;i++)
{
s.avg = s.total/10;
}
cout << "total and avg" << s.total << s.avg <<endl;
return 0;
}
