#include <iostream>
using namespace std;

void StairCaseSearch(int arr[10][10], int n, int k){
    int i=0, j=n-1;
    while(i<n && j>=0){
        if(arr[i][j]==k){
            cout<<"Element Found at: "<<i<<","<<j<<endl;
            break;
        }
        else if(arr[i][j]>k){
            j--;
        }
        else{
            i++;
        }
    }
}

int main(int argc, char const *argv[]) {
    int n;
    cin>>n;
    int arr[10][10];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    int key;
    cin>>key;
    StairCaseSearch(arr,n,key);
    return 0;
}
