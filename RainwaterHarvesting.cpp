#include <iostream>
using namespace std;

void RainwaterHarvesting(int *arr, int n) {
    int lbd[n], rbd[n];
    int lmax = arr[0], rmax = arr[n-1];
    lbd[0] = arr[0];
    rbd[n-1] = arr[n-1];
    for(int i=1;i<n;i++){
        lbd[i] = max(lmax,arr[i]);
        lmax = max(lmax,arr[i]);
    }
    for(int i=n-2;i>=0;i--){
        rbd[i] = max(rmax,arr[i]);
        rmax = max(rmax,arr[i]);
    }

    int water = 0;
    for(int i=0;i<n;i++){
        water+= min(rbd[i],lbd[i]) - arr[i];
    }
    cout<<water;
}

int main(int argc, char const *argv[]) {
    int n;
    cin>>n;
    int *arr = new int[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    RainwaterHarvesting(arr,n);
    return 0;
}
