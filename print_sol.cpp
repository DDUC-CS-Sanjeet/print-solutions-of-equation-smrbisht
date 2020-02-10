#include<iostream>
using namespace std;
void pattern(int n,int c)
{
	int a[n];
	for(int i=0;i<n;i++)
	{
		a[i]=0;
	}
	while(true)
	{
		int sum=0;
		int flag=1;
		for(int i=0;i<n;i++)
		{
			if(a[i]==c+1)
			{
				a[i]=0;
				if(i==n-1)
				{
				flag=0;
					break;
				}
				a[i+1]++;
			}
			sum=sum+a[i];
		}
		if(flag==0)
		break;
		if(sum==c)
		{
			for(int i=0;i<n;i++)
			cout<<a[i]<<" ";
			cout<<"\n";
		}
		a[0]++;
	}
}
int main()
{
	int m,c;
	cout<<"ENTER NUMBER OF DIGITS  ";
	cin>>m;
	cout<<" ENTER THE TOTAL SUM OF DIGITS ";
	cin>>c;
	pattern(m,c);
	return 0;
}
