#include<stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;
class s11
{
struct list
{
int data;
struct list*next;
}*head;
public :
typedef struct list node;
s11();
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
s11::s11()
{
head = NULL;
}
int main()
{
int ch,k,c;
s11 obj;
do{
cout << "\n\t main menu\n";
cout <<"\t\t 1.create\n\t\t 2.display\n\t\t 3.insert \n\t\t 4.deletepost\n";
cout << "5.count\n\t\t 6.search\n\t\t 7.exit\n";
cout <<"\n\t enter ur choice";
cin >> ch;
switch(ch)
{ case 1 :obj.create();
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
void s11:: create()
{
node *temp,*p;
temp = new node;
cout << "enter the elements";
cin >> temp->data;
if (head == NULL)
{
temp->next = head;
head = temp;
}
else{
p = head;
while(p->next!= NULL)
p = p->next;
temp->next = NULL;
p -> next = temp;
}
}
void s11:: display()
{
int d;
node *q;
q = head;
cout <<"\n elements in the list";
while(q!=NULL)
{
cout << "->" << q->data;
q = q->next;
}
}
int s11::count()
{
node *p;
int c=0;
p=head;
while(p!=NULL)
{
p = p->next;
c++;
}
return (c);
}
void s11::search()
{
int f = 0,k,v;
node *p;
p = head;
cout << "enter the element to find";
cin >> k;
while(p!= NULL)
{
if(p->data == k)
{ f= 1;
cout << "element found";
}
p = p->next;
}
if ( f==0)
{cout << "element not found";
}
}
void s11::insert()
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
void s11::insertatbeg()
{
node *temp;
temp = new node;
cout << "enter thr inserted element";
cin >> temp->data;
temp->next = head;
head = temp;
}
void s11::insertatmid()
{
node *temp,*p;
int key;
temp = new node;
cout <<"enter element";
cin >> temp -> data;
cout << "enter key";
cin >> key;
p = head;
while(p!=NULL)
{
if(p->data == key)
{
temp ->next = p->next;
p->next = temp;
}
p = p->next;
}
}
void s11::insertatend()
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
while(p ->next!=NULL)
p = p->next;
temp ->next = NULL;
p->next= temp;
}
}
int s11 :: deletepos()
{
node *p;
int pos,i,k;
cout << "enter elementfor deletion";
cin >> pos;
if(head!= NULL)
{
if( pos == 1)
{
k = head->data;
head = head->next;
return (k);
}
else
{
i=2;
p = head;
while((p!=NULL)&&(i<pos))
{
p = p->next;
i++;
}
if(p!=NULL)
{
k= p->next->data;
p->next = p->next->next;
return (k);
}
}
}
else
cout <<"\n list is empty";
}
