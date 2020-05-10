#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,trgt,arr[1000];
    int i,j;
    cin>>n;
    for(j=0;j<n;j++)
    {
        cin>>arr[j];
    }
    cin>>trgt;
    sort(arr, arr+n);

    for(j=0;j<n;j++)
    {
        for(i=j+1;i<n;i++)
        {
            if(arr[i]+arr[j]==trgt)
            {
                cout<<arr[j]<<" and "<<arr[i]<<endl;;
            }
        }
    }
    return 0;
}
