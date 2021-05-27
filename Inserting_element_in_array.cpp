#include<iostream>
using namespace std;
int main()
{
	int n=10,a[n]={10,20,30,52,65,27,100,80},x,pos;                    
	cout<<"Enter number to get insert : ";         
	cin>>x;                                        
	cout<<"Enter position to insert the value : ";
	cin>>pos;
	int index=pos-1;
	for(int i=0;i<index;i++)
	{
		cout<<a[i]<<" ";
	}                         
    for(int i=index;i<=n;i++)
	{   
	   int pre=a[i],nex=a[i+1];
    	if(i==index){
         a[i]=x;
         cout<<a[i]<<" ";
        }
        int stre1=pre,stre2=nex;
        nex=stre1;
        cout<<nex<<" ";
    }	
}
