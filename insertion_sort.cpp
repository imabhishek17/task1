#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,j,t;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=1;i<n;i++)
	{
		t=a[i];
		j=i-1;
		while((t<a[j])&&(j>=0))
		{
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=t;
	}
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
