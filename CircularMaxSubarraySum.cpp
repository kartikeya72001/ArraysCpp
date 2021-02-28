#include<iostream>
using namespace std;

int KadaneAlgo(int *arr, int n)
{
    int cs = 0, ms = 0;
    for(int i=0;i<n;i++)
    {
        cs = cs+arr[i];
        if(cs<0)
            cs=0;
        ms = max(cs,ms);
    }
    return ms;
}

int main() {
	int t;
    cout<<"No of test Cases: ";
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int sum = 0;
		int arr[10000];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}

        int maxn=-1e8;
        for(int i=0;i<n;i++){
            if(arr[i]>maxn)
                maxn = arr[i];
        }
        if(maxn<0)
            cout<<maxn<<endl;
        else{
            int a = KadaneAlgo(arr,n);
    		for(int i=0;i<n;i++){
    			sum+=arr[i];
    			arr[i] = -arr[i];
    		}
    		int b = KadaneAlgo(arr,n);
    		cout<<max(a,sum+b)<<endl;;
        }
	}
	return 0;
}
