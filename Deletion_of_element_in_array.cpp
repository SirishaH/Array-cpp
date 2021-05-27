#include<iostream>
using namespace std;
int main()
{
	int cap;//ARRAY SIZE
	cout<<"Enter array size : ";
	cin>>cap;
	int a[cap];
    int n;//INSERTING ELEMENTS
    cout<<"Enter how many elements you want to insert : ";
	cin>>n;
    for(int i=0;i<n;i++)
    {
    	cin>>a[i];//4 2 5 7 8---> 4 2 7 8
	}
	int x;//To get deleted ----> 5
	cout<<"Element to be deleted : ";
	cin>>x;
	for(int i=0;i<n;i++)
	{
		if(a[i]==x)       
		{
			a[i]=a[i+1];
		}
		if(a[i]==a[i+1])
		{
			a[i+1]=a[i+2];
		}
	}
	n--;
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
