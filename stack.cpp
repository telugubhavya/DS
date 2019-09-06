#include <iostream>
#include <stdio.h>
#include <stdlib.h>
# define MAX 5
int top = -1;
int a[5];
using namespace std;
class sua
{
public : void push();
void pop();
void display();
};
int main()
{
sua obj;
int choice;
while(1)
{
cout << "1.push\t 2.pop \t 3. display \t 4.exit\n";
cin >> choice;
switch(choice)
{
case 1 : obj.push();
break;
case 2 : obj.pop();
break;
case 3 : obj.display();
break;
case 4 : exit(0);
default : cout << "invalid choice\n";
}
}
}
void sua :: push()
{
int pushed_item;
if(top == (MAX -1))
cout << "stack overflow\n";
else
{
cout << " enter the item to be pushed in stack : ";
cin >> pushed_item;
top = top +1;
a[top] = pushed_item;
} }
void sua :: display()
{
int i;
if(top == -1)
cout << "stack empty\n";
else
{
cout << "stack elements are :\n";
for( i = top; i >= 0 ; i--)
cout << a[i]\t << "\n";
}}
void sua :: pop()
{
if(top == -1)
cout << "stack is empty\n";
else
{
cout << "popped element is : " << a[top];
top = top -1;
}
}
