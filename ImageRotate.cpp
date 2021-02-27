#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int temp=0;
    int arr[100][100];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        int k=0, j=n-1;
        while(k<j){
            swap(arr[i][j],arr[i][k]);
            k++;
            j--;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i<j){
                swap(arr[i][j],arr[j][i]);
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
	return 0;
}
