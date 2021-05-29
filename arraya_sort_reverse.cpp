#include<bits/stdc++.h>
using namespace std;
int main()
{
    //to check whether array is sorted or not

    int n,a[n],flag=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {   
            if(a[i]>a[j])
            {
                flag=1;
                break;
            }
        }
    }
    if(flag==0)
    {
        cout<<"sorted";
    }
    else
    {
        cout<<"not sorted";
    }


    //another way to check wether array is sorted or not

    int n,a[n],flag=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++)
    {
        if(a[i]>a[i+1])
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        cout<<"array is sorted";
    }
    else
    {
        cout<<"array is not sorted";
    }



    //reversing of array
	int n,j,i,temp;
  	cin>>n;
        int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0,j=n-1;i<(n/2);i++,j--)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	} 
}
