#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#define MAX 5
int top =-1;
int a[5];
using namespace std;
class sua
{
public :
void push();
void pop();
void display();
};
int main()
{
sua obj;
int choice;
while(1)
{
cout << "1.push\t\t 2.pop \t\t 3.display\t\t 4.quit\n";
cout << "enter choice";
cin >> choice;
switch(choice)
{
case 1:obj.push();
break;
case 2: obj.pop();
break;
case 3: obj.display();
break;
case 4: exit(1);
break;
default: cout << "wrong choice\n";
}
}
}
void sua :: push()
{
int pushed_item;
if( top == ( MAX - 1) )
cout << "stack overflow:";
else
{
cout << "enter the item to be pushed in stack";
cin >> pushed_item;
top = top + 1;
a[top] = pushed_item;
}
}
void sua:: display()
{
int i;
if( top == -1)
cout << "stack is empty";
else
{
cout << "stack elements";
}
for(i = top; i >= 0; i--)
cout << a[i] << "\n";
} 
void sua::pop()
{
if(top ==-1)
cout << "stack underflow\n";
else
{
cout <<"popped element is "<< a[top];
top = top - 1;
}
}


