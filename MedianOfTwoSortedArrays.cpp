#include <iostream>
#include <vector>
using namespace std;

double Helper(vector<int>& a, int n, vector<int>& b, int m){
    int min_index = 0, max_index = n, i, j, median;

    while (min_index <= max_index)
    {
        i = (min_index + max_index) / 2;
        j = ((n + m + 1) / 2) - i;

        if (j < 0)
        {
            max_index = i-1;
            continue;
        }

        if (i < n && j > 0 && b[j - 1] > a[i])
            min_index = i + 1;

        else if (i > 0 && j < m && b[j] < a[i - 1])
            max_index = i - 1;

        else
        {
            if (i == 0)
                median = b[j - 1];

            else if (j == 0)
                median = a[i - 1];
            else
                median = max(a[i - 1], b[j - 1]);
            break;
        }
    }

    if ((n + m) % 2 == 1)
        return (double)median;

    if (i == n)
        return (median+b[j]) / 2.0;

    if (j == m)
        return (median + a[i]) / 2.0;

    return (median + min(a[i], b[j])) / 2.0;
}

double MedianOfArrays(vector<int>& a, vector<int>& b)
{
    int n = a.size(), m = b.size();
    if(n<m)
        return Helper(a,n,b,m);
    else
        return Helper(b,m,a,n);

}

int main(int argc, char const *argv[]) {
    int n,m;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    cin>>m;
    vector<int> b(m);
    for(int i=0;i<m;i++)
        cin>>b[i];
    cout<<MedianOfArrays(a,b)<<endl;
    return 0;
}
