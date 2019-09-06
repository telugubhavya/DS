#include <iostream>
using namespace std;
int main()
{
int a[50],i,n,key;
cout << "enter the size of an array\n ";
cin >> n;
cout << "enter the elements of an array\n";
for (i=0;i<n;i++)
cin >> a[i];
cout << "enter the element you want to search \n";
cin >>key;
for(i=0;i<n;i++)
{
if (a[i] == key)
cout << "element found at position " << i <<endl ;
else 
cout << "element not found\n"<<endl ;
}
}
