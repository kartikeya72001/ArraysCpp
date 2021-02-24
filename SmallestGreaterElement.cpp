#include <iostream>
#include <algorithm>
using namespace std;
int binarySearch(int arr[], int n, int k){
    int start = 0, end = n;
    while(start<=end){
        int mid = (start+end)/2;
        if(arr[mid] == k)
            return mid;
        else if(arr[mid]>k)
            end = mid-1;
        else
            start = mid+1;
    }
}

int* greaterElement(int arr[], int n)
{
    int new_arr[n];
    for(int i=0;i<n;i++)
        new_arr[i] = arr[i];
    sort(new_arr,new_arr+n);

    for(int i=0;i<n;i++){
        int idx = binarySearch(new_arr,n,arr[i]);
        cout<<"arr: "<<new_arr[idx]<<endl;
        if(idx == n-1){
            arr[i] = -10000000;
        }
        else
            arr[i] = new_arr[idx+1];

    }
    return arr;
}
int main(int argc, char const *argv[]) {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int *b;
    b = greaterElement(arr,n);
    for(int i=0;i<n;i++){
        cout<<b[i]<<" ";
    }
    cout<<endl;
    return 0;
}
