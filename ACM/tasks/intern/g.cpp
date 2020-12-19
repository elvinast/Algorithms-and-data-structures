#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    vector<int>v(100000, 0);
    string s;
    getline(cin, s);
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    v[s[0]]++;
    for(int i=0;i<s.length();i++){
        if(s[i] == ' '){
            v[s[i+1]]++;
        }

    }
    for(int i=97;i<123;i++){
        cout<<v[i]<<endl;
    }
    

    return 0;
}