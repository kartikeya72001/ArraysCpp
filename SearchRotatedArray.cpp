#include <iostream>
#include <vector>
using namespace std;

int Pivot(vector<int> v, int s, int e){
    if(s>e)
        return -1;
    if(s==e)
        return s;
    int mid = (s+e)/2;
    if(mid < e && (mid+1)<v.size() && v[mid] > v[mid+1])
        return mid;
    if(s < mid && (mid-1)>0 && v[mid] < v[mid-1])
        return mid-1;
    if(v[s] >= v[mid])
        return Pivot(v,s,mid-1);
    return Pivot(v,mid+1,e);
}
int BinarySearch(vector<int> arr, int s, int e, int k){
    if(s>e)
        return -1;
    while(s<=e){
        int mid = (s+e)/2;

        if(arr[mid] == k)
            return mid;
        else if(arr[mid] > k)
            e = mid-1;
        else
            s = mid+1;
    }
    return -1;
}
int Search(vector<int> v, int K) {
    int pivot = Pivot(v, 0, v.size()-1);
    cout<<"Pivot is: "<<pivot<<endl;
    if(pivot == -1){
        return BinarySearch(v,0,v.size()-1,K);
    }

    int a = BinarySearch(v,0,pivot,K);

    int b=BinarySearch(v,pivot+1,v.size()-1,K);
    return a == -1?b:a;
}

int main(int argc, char const *argv[]) {
    int n,k;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    cin>>k;
    cout<<"The Index is "<<Search(v,k);
    return 0;
}
