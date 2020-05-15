#include <iostream>
#include <vector>
using namespace std;
int KadaneAlgo(vector<int> v)
{
    int cs = 0, ms = 0;
    for(int i=0;i<v.size();i++)
    {
        cs = cs+v[i];
        if(cs<0)
            cs=0;
        ms = max(cs,ms);
    }
    return ms;
}

int main(int argc, char const *argv[]) {
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    cout<<"Maximum Sub array sum is "<<KadaneAlgo(v);
    return 0;
}
