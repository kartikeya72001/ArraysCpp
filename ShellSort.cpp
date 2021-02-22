#include <iostream>
#include <stdlib.h>
#include<ctime>
using namespace std;

void ShellSort(int arr[], int n)
{
    for (int gap = n/2; gap > 0; gap /= 2)
    {
        for (int i = gap; i < n; i += 1)
        {
            int temp = arr[i];
            int j;
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap)
                arr[j] = arr[j - gap];

            arr[j] = temp;
        }
    }
    return;
}
int main(int argc, char const *argv[]) {
    int n = 1000;
    int arr[10000];
    //cin>>n;
    for(int i=0;i<n;i++)
    {
        arr[i] = rand();
    }
    ShellSort(arr,n);

    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    cout<<clock()<<"ms";
    return 0;
}
