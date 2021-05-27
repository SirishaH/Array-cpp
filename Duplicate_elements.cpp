#include<iostream>
using namespace std;
int main()
{
	int a[30],n;
	cout<<"Enter range of array";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++) 
	{
		int count=0;
		for(int j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
			count=count+1;
		    }
		}
		if(count==1)
		{
		cout<<a[i]<<" ";
	    }
	}
}
