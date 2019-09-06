#include<iostream>
using namespace std;
void heapify(int arr[], int n, int i)
{
int largest = i;
int l = 2*i + 1;
int r = 2*i +2;
if(l < n && arr[l] > arr[largest])
largest = l;
 if(r< n && arr[r] >arr[largest])
largest = r;
if(largest!=i)
{
heapify(arr,n,largest);
}
}
void heapsort(int arr[], int n)
{
for(int i = n/2 -1; i >= 0;i--)
heapify(arr,n,i);
for(int i = n-1; i >= 0; i--)
{
swap(arr[0],arr[i]);
heapify(arr,i,0);
}
}
void printarray(int arr[],int n)
{
int i;
for(i=0;i< n;i++)
{
cout << arr[i] <<" ";
cout <<"\n";
}
}
int main()
{
int n,i;
int list[30];
cout << "enter no of elements\n";
cin >> n;
cout << "enter" << n << "elements";
for(i = 0; i < n; i++)
{
cin >> list[i];
heapsort(list,n);
}
cout <<"sorted array is \n";
printarray(list,n);
return 0;
}
