#include <iostream>
#include <cstring>
using namespace std;

string RemoveDuplicates(char* s) {
    int n = strlen(s);
    if(n==0 or n==1)
        return s;
    int j = 0;
    for(int i=1;i<n;i++){
        if(s[i]!=s[j]){
            j++;
            s[j] = s[i];
        }
    }
    s[j+1] = '\0';
    return s;
}

int main(int argc, char const *argv[]) {
    char s[1000];
    cin.getline(s,1000);
    cout<<RemoveDuplicates(s)<<endl;
    return 0;
}
