#include<iostream>
using namespace std;
int kadane(int a[], int n);
//driver function
int main()
{
    int n,nt,ans;
    cin>>nt;
    while(nt>0)
    {
        cin>>n;

        int a[1000],a2[1000];

        for (int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        //inverting array
        for (int i=0;i<n;i++)
        {
            a2[i]=-a[i];
        }
        ans=kadane(a,n);
        cout<<ans;
        nt--;
    }
    return 0;
}
//kadane function
int kadane(int a[], int n)
{
    int finalans=0,a2[1000];
    int cs=0,ms=0;
    for (int i=0;i<n;i++)
    {
        cs=cs+a[i];
        if(cs<0)
            cs=0;
        ms=max(cs,ms);
    }

    int cs2=0, ms2=0;
    //inverting array
    for (int i=0;i<n;i++)
    {
        a2[i]=-a[i];
    }
    //calculation for inverted array
    for (int i=0;i<n;i++)
    {
        cs2=cs2+a2[i];
        if(cs2<0)
            cs2=0;
        ms2=max(cs2,ms2);
    }
     //calculation of final answer
     finalans=max(ms,ms2+cs);
    return (finalans);
}
