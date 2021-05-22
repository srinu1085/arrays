#include<bits/stdc++.h>
using namespace std;
int main()
{
int a[100],temp=0,count=0,flag=0;
    for(int i=0;i<10;i++)
    {
        cin>>a[i];
    }          
    for(int i=0;i<10;i++)
    {
        if(a[i]==1)
        {
            temp++;
        }
        else if(a[i]==2)
        {
            count++;
        }
        else
        {
            flag++;
        }
        
    }
    cout<<temp<<"-->1"<<"\t"<<count<<"-->2"<<"\t"<<flag<<"-->3";
}