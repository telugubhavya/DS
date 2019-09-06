#include <iostream>
using namespace std;
int Lsearch(int list[20], int n, int key);
int main()
{
int n,key,i,list[20],pos;
cout << "enter no of elements\n";
cin >> n;
cout << "enter" <<n << "elements\n";
for(i = 0; i < n; i++)
cin >> list[i];
cout << "enter key to search";
cin >> key;
pos = Lsearch(list,n,key);
if(pos == -1)
cout << "\n element not found";
else
cout << "\n element found at index"<<pos;
}
int Lsearch(int list[20],int n,int key)
{
int i,pos = -1;
for(i = 0; i < n; i++)
if(key==list[i])
{
pos = i;
break;
}
return pos;
}
