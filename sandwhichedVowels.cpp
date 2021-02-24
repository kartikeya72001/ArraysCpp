#include <iostream>
using namespace std;

string Sandwiched_Vowel(string &s);

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        cout<<Sandwiched_Vowel(s)<<endl;
    }
    return 0;
}

bool isVowel(char ch)
{
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        return true;
    else
        return false;
}
string Sandwiched_Vowel(string &a){
    int n = a.length();
    string updatedString = "";
    for (int i = 0; i < n; i++) {

        if (!i || i == n - 1) {
            updatedString += a[i];
            continue;
        }
        if (isVowel(a[i]) && !isVowel(a[i - 1])
            && !isVowel(a[i + 1])) {
            continue;
        }
        updatedString += a[i];
    }
    return updatedString;
}
// int main(int argc, char const *argv[]) {
//     string s;
//     cin>>s;
//     cout<<Sandwiched_Vowel(s);
//     return 0;
// }
//For a given string S, comprising of only lowercase English alphabets, eliminate the vowels from the string that occur between two consonants(sandwiched between two immediately adjacent consonants).
