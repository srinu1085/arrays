#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cout<<"enter size of the array:  ";
    cin>>size;
    int a[size];
    for(int i=1;i<=size;i++)
    {
        a[i]=-1;
        cout<<a[i]<<" ";   
    }
    int n;
    cout<<endl<<"enter number of elements in array:  ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    cout<<"array after insertion of elements"<<endl;
    for(int i=1;i<=size;i++)
    {
        cout<<a[i]<<" ";
    }
    int key,flag=0;
    cout<<endl<<"enter key to delete: ";
    cin>>key;
    for(int i=1;i<=n;i++)
    {
        if(a[i]==key)
        {
            flag=i;
            break;
        }
    }
    if(flag>0)
    {
        for(int i=flag;i<=size;i++)
        {
            a[i]=a[i+1];
        }
    }
    if(flag==0)
    {
        cout<<"element not found"<<endl;
    }
    cout<<"array after deletion"<<endl;
    for(int i=1;i<=size;i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}
