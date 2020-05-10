/*#include<iostream>
using namespace std;
int main()
{
    int n1,n2,arr[10][10];
    int i, j ;
    cin>>n1>>n2;

    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n2;j++)
        {
            cin>>arr[i][j];
        }
    }
    i = 0 ;
    j = 0 ;
    for(j=0;j<n2;j++)
    {
        while(i<n1)
        {
            if(j % 2 == 0)
                cout<< arr[i][j]<< ",  " ;
            else if(j % 2 != 0)
                cout<< arr[n1-i-1][j] << ", " ;
            i++;
        }
        i = 0 ;
    }
    cout<<"END";
    return 0;

}*/
#include<iostream>
using namespace std;
int main()
{
    int n1,n2,arr[10][10];
    int i=0,j=0;

    cin>>n1>>n2;

    for(i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++)
        {
            cin>>arr[i][j];
        }
    }
    i=0;
    j=0;
    if(n1%2==0)
    {
        while(i<n1/2)
        {
            for(j=0;j<n2;j++)
            {
                cout<<arr[j][i]<<",";
            }
            for(j=n2-1;j>=0;j--)
            {
                cout<<arr[i][j]<<",";
            }
            i++;
        }
    }
    else
    {
        while(i<n1+1/2)
        {
            for(j=0;j<n2;j++)
            {
                cout<<arr[j][i]<<",";
            }
            for(j=n2-1;j>=0;j--)
            {
                cout<<arr[i][j]<<",";
            }
            i++;
        }
    }
    cout<<"END";
    return 0;
}
