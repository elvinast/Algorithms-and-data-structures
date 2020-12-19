#include <iostream>
#include <vector>
#define ull unsigned long long
using namespace std;

const ull p = 31;

ull getHash(string s){
    ull hash = 0;
    ull curP = 1;
    for (int i = 0; i < s.size(); i++){
        hash += (s[i] - 'a') * curP;
        curP *= p;
    }
    return hash;
}

vector <ull> getPrefixHash(string s){
    vector <ull> h(s.size());
    h[1] = s[0] - 'a';
    ull curP = p;
    for (int i = 1; i < s.size(); i++){
        h[i] = h[i - 1] + (s[i] - 'a') * curP;
        curP *= p;
    }
    return h;
}

void solve(){
    string s, t;
    cin >> s >> t;
    ull hashT = getHash(t);
    vector <ull> hashS = getPrefixHash(s);
    int n = s.size(), m = t.size();
    ull curP = 1;
    bool ok = false;
    int idx = -1;
    for (int i = 0; i < n; i++){
        if (hashT * curP == hashS[i + m - 1] - (i == 0 ? 0 : hashS[i - 1])){ // 0 or hash[i-1]
            cout << i << ' ';
            continue;
            // ok = true;
            // idx = i;
            // break;
        }
        else{
            curP *= p;
        }
    }
}

int main(){
    solve();
    return 0;
}