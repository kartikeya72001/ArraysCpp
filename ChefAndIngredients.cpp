#include<iostream>
using namespace std;
int main()
{
    int t,n,x,arr[1000];
    int counter=0;
    cin>>t;
    while(t>0)
    {
        counter=0;
        cin>>n;
        cin>>x;

        for (int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<n;i++)
        {
            if(arr[i]>=x)
                counter++;
        }
        if(counter>0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        t--;
    }
    return 0;
}
