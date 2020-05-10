#include<iostream>
using namespace std;
void Display(int n, int arr[])
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int SelectionSort(int n, int arr[])
{
    int flag;
    for(int i=0;i<n-1;i++)
    {
        flag=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[flag])
                flag=j;
        }
        swap(arr[flag],arr[i]);
    }
    Display(n, arr);
}
int main()
{
    int n;
    int arr[100];
    cout<<"ENTER SIZE"<<endl;
    cin>>n;
    cout<<"Enter Elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    SelectionSort(n,arr);
    return 0;
}
