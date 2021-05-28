#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ele1=INT_MIN;
    int ele2=INT_MIN;
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ele1=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]>ele1)
        {
            ele2=ele1;
            ele1=a[i];
        }
        else if(a[i]>ele2 && ele2!=INT_MIN)
        {
            ele2=a[i];
        }
    }
    if(ele2==INT_MIN)
    {
        cout<<"all are equal elements";
    }
    else
    {
        cout<<ele2;
    }

    return 0;
}
