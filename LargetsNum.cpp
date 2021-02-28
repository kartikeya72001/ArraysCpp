#include<iostream>
#include<algorithm>
using namespace std;

bool compare(string a, string b){
    return a>b;
}

void LargestNum(string *arr, int n){
    sort(arr,arr+n, compare);
    for(int i=0;i<n;i++)
        cout<<arr[i];
    cout<<endl;
}

int main(int argc, char const *argv[]) {
    int t;
    cin>>t;
    while(t--){
        int n;
        string arr[100];
        cin>>n;
        for(int i=0;i<n;i++)
            cin>>arr[i];
        LargestNum(arr,n);
    }
    return 0;
}
