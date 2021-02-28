#include <iostream>
using namespace std;

void Merge(int arr1[], int arr2[], int n, int m){
    for (int i = m - 1; i >= 0; i--)
	{
		int j, last = arr1[n - 1];
		for (j = n - 2; j >= 0
			&& arr1[j] > arr2[i]; j--)
			arr1[j + 1] = arr1[j];

		if (j != n - 2 || last > ar2[i])
		{
			arr1[j + 1] = arr2[i];
			arr2[i] = last;
		}
	}
}

int main(int argc, char const *argv[]) {
    int n, m;
    int arr1[1000], arr2[1000];
    cin>>n>>m;
    for(int i=0;i<n;i++)
        cin>>arr1[i];
    for(int j=0;j<m;j++)
        cin>>arr2[j];

    Merge(arr1,arr2,n,m);

    for(int i=0;i<n;i++)
        cout<<arr1[i]<<" ";
    cout<<endl;
    for(int j=0;j<m;j++)
        cout<<arr2[j]<<" ";
    return 0;
}
