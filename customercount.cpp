#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a[n];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int *maxi=max_element(a,a+n);
	int frq[*maxi+1]={0};
	for(int i=0;i<n;i++)
	{
		frq[a[i]]++;
	}
	for(int i=0;i<=*maxi;i++)
	{
		cout<<frq[i]<<" ";
	}

	/*map<int,int>dic;
	for(int i=0;i<n;i++)
	{
		dic[a[i]]++;
	}
	for(auto it:dic)
	{
		cout<<it.first<<" "<<it.second<<endl;
	}*/
}