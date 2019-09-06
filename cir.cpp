                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   #include<stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;
class c11
{
struct list
{
int data;
struct list*next;
}*head;
public :
typedef struct list node;
c11();
void create();
void insert();
void display();
int count();
int deletepos();
void insertatbeg();
void insertatmid();
void insertatend();
void search();
};
c11::c11()
{
head = NULL;
}
int main()
{
int ch,k,c;
c11 obj;
do{
cout << "\n\t main menu\n";
cout <<"\t\t 1.create\n\t\t 2.display\n\t\t 3.insert \n\t\t 4.deletepost\n";
cout << "5.count\n\t\t 6.search\n\t\t 7.exit\n";
cout <<"\n\t enter ur choice";
cin >> ch;
switch(ch)
{ case 1 : obj.create();
break;
case 2 : obj.display();
break;
case 3: obj.insert();
break;
case 4 : k=obj.deletepos();
cout<< "\n deleted element from the list :" << k;
break;
case 5 : c = obj.count();
cout << "no of elements to count : " << c;
break;
case 6 : obj.search();
break;
case 7: exit(0);
}
}while(ch >0 && ch <8);
}
void c11:: create()
{
node *temp,*p;
temp = new node;
cout << "enter the elements";
cin >> temp->data;
if (head == NULL)
{
temp->next = temp;
head = temp;
}
else{
p = head;
while(p->next!=head)
p = p->next;
p->next = temp;
temp->next = head;
}
}
void c11 :: display()
{
int d;
node *q;
q = head;
cout <<"\n elements in the list";
if(q == head)
{
cout << q->data << "->";
q = q->next;
while (q!=head)
{cout << "->" << q->data;
 q = q-> next;
}
}
else
{
cout << "list is empty";
}
}
int c11 :: count() {
node *p;
int c=0;
p=head;
while(p!=head)
{
p = p->next;
c++;
}
return (c);
}
void c11 :: search()
{
int f = 0,k;
node *p;
p = head;
cout << "enter the element to find";
cin >> k;
do
{
if(p->data == k)
{ f= 1;
cout << "element found";
}
p = p->next;
}
while ((p!=head)&&(f==0));
if ( f==0)
{cout << "element not found";
}
}
void c11::insert()
{
int ch;
do
{
cout <<"\n1.insertat beg\t2.insertatmid\t3.insertatend\t4.display\t5.exit";
cout << "enter ur choice";
cin >> ch;
switch(ch)
{
case 1: insertatbeg();
break;
case 2: insertatmid();
break;
case 3:insertatend();
break;
case 4:display();
default : break;
}
}
while(ch > 0 && ch<5);
}
void c11::insertatbeg()
{
node *temp,*p;
temp = new node;
cout << "enter thr inserted element";
cin >> temp->data;
p = head;
while(p->next!=head)
{
p = p->next;
}
p ->next = temp;
temp->next = head;
head = temp;
}
void c11 :: insertatmid()
{
node *temp,*p;
int key,element;
temp = new node;
cout <<"enter element";
cin >> temp -> data;
cout << "enter key";
cin >> key;
p = head;
do
{
if(p->data==key)
{
temp ->next = p->next;
temp->data = element;
p->next = temp;
}
else
p = p->next;
}while (p!=head);
}
void c11::insertatend()
{
node *temp,*p;
temp = new node;
cout <<"enter element";
cin >> temp->data;
if(head == NULL)
{
temp->next = head;
head = temp;
}
else
{
p = head;
while(p ->next!=head)
p = p->next;
p->next= temp;
temp->next = head;
}
}
int c11 :: deletepos()
{
node *p,*p1;
int pos,i,k;
cout << "enter element for deletion";
cin >> pos;
if(p->data==pos)
{
p1 = p->next;
if(p1 == p)
{p = NULL;
head = p;
}
else
{
while(p->next!= head)
p = p->next;
p->next = p1;
head = p1;
}
}
else
{
while(p ->next!=head)
{
if((p->next) ->data == pos)
{
p1 = p->next;
p->next = p1->next;
p1->next = NULL;
delete p1;
}
else 
p = p->next;
}
}
cout << "list empty\n";
}
