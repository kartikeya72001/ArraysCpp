#include<iostream>
using namespace std;
int main()
{
    int n,nt;
    cin>>nt;
    while(nt>0)
    {
        cin>>n;
        int cs=0,ms=0;

        int a[10];

        for (int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for (int i=0;i<n;i++)
        {
            cs=cs+a[i];
            if(cs<0)
                cs=0;
            ms=max(cs,ms);
        }
        cout<<ms<<endl;
        nt--;
    }
    return 0;
}
