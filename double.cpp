                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   #include<stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;
class d11
{
struct list
{
int data;
struct list*next, *prev;
}*head;
public :
typedef struct list node;
d11();
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
d11::d11()
{
head = NULL;
}
int main()
{
int ch,k,c;
d11 obj;
do{
cout << "\n\t main menu\n";
cout <<"\t\t 1.create\n\t\t 2.display\n\t\t 3.insert \n\t\t 4.deletepost\n\t\t5. search\n\t\t 6.exit";
cout <<"\n\t enter ur choice";
cin >> ch;
switch(ch)
{ case 1: obj.create();
break;
case 2 : obj.display();
break;
case 3: obj.insert();
break;
case 4 : k=obj.deletepos();
cout<< "\n deleted element from the list :" << k;
break;
case 5 : obj.search();
break;
case 6: exit(0);
}
}while(ch >0 && ch <7);
}
void d11:: create()
{
node *temp,*p;
temp = new node;
cout << "enter the elements";
cin >> temp->data;
if (head == NULL)
{
temp->prev = head;
temp->next = head;
head = temp;
}
else{
p = head;
while(p->next!=NULL)
p = p->next;
temp->next = NULL;
temp->prev = p;
p->next = temp;
}
}
void d11 :: display()
{
int d;
node *q;
q = head;
cout <<"\n elements in the list";
while(q!=NULL)
{
cout << "->" << q->data;
 q = q-> next;
}
}
void d11 :: search()
{
int f = 0,k,v,c;
node *p;
p= head;
c =0;
cout << "enter the element to find";
cin >> k;
while(p!=NULL)
{
c++;
if(p->data == k)
{
f = 1;
cout << "element found at"<<c;
}
p = p->next;
}
if(f == 0)
{
cout << "element not found";
}
}
void d11::insert()
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
void d11::insertatbeg()
{
node*temp;
temp = new node;
cout << "enter thr inserted element";
cin >> temp->data;
temp->next = head;
temp->prev = NULL;
head = temp;
}
void d11 :: insertatmid()
{
node *temp,*p;
int key;
temp = new node;
cout <<"enter element";
cin >> temp -> data;
cout << "enter key";
cin >> key;
p = head;
while (p!=NULL)
{
if(p->data==key)
{
p->next->prev = temp;
temp ->next = p->next;
p->next = temp;
temp->prev =p;
}
p = p->next;
}
}
void d11 :: insertatend()
{
node *temp,*p;
temp = new node;
cout <<"enter element";
cin >> temp->data;
if(head == NULL)
{
temp->prev = head;
temp->next = head;
head = temp;
}
else 
{
p = head;
while(p->next!=NULL)
p = p->next;
temp->next = NULL;
temp->prev = p;
p->next = temp;
}
}
int d11 :: deletepos()
{
node *p,*t,*q;
int element,pos,i,k;
cout << "enter element for deletion";
cin >> element;
if(head==NULL)
{
if (pos==1)
{
t = head;
head = head->next;
head->prev = NULL;
cout << "deleted succesfully"<<t->data;
delete(t);
}
else
{
i= 1;
p = head;
q = head;
while(i <pos)
{
q =p;
p = p->next;
i++;
}
t = p;
q->next = p->next;
p->next->prev = q;
cout << "is deleted successfullY"<< t->data;
free(t);
}
}
else
cout << "list empty\n";
}
