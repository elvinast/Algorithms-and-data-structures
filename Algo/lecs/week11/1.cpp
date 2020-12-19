#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <set>
#define ll long long

using namespace std;

void solve(){
    string s;
    set <string> a;
    cin >> s;
    for(int i = 0; i < s.size(); i++){
        string w = " ";
        for(int j = i; j < s.size(); j++){
            w += s[j];
            a.insert(w);
        }
    }
    cout << a.size() << "\n";
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.precision(20);
    solve();
    return 0;
}