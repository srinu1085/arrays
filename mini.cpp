#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[10];
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
    }     
    int max=INT_MAX;     
    for(int i=0;i<5;i++)
    {
        if(a[i]<max)
        {
            max=a[i];
        }
    }
    cout<<max;
}