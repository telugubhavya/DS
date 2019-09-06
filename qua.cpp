//queue using array
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#define MAX 4
int a[MAX];
int rear = -1;
int front = -1;
using namespace std;
class qua
{
public:void insert();
	void del();
	void display();
};
int main()
{
qua obj;
int choice;
while(1)
{
cout << "1.insert\n 2.delete\n 3.display\n 4.quit\n";
cout << "enter your choice \n";
cin >> choice;
switch(choice )
{
case 1:obj.insert();
break;
case 2:obj.del();
break;
case 3:obj.display();
break;
case 4: exit(1);
default : cout << "wrong choice\n";
}}}
void qua::insert()
{
int added_item;
if (rear== MAX-1)
cout << "queue overflow\n";
else 
{
if (front == -1)
front = 0;
cout << "input the element for adding in queue:\n";
cin >> added_item;
rear = rear + 1;
a[rear] = added_item;
}}
void qua :: display()
{
int i;
if (front == -1)
cout << "queue is empty :\n";
else
{
cout << "QUEUE IS\n";
for (i= front; i<=rear;i++)
cout << a[i] << "\n";
}
}
void qua::del()
{
if (front == -1)
{
cout<<  "queue underflow\n";
return;
}
else
{
cout << "element deleted from queue\n"<< a[front]; << endl;
front = front +1;
}}



