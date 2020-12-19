#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <stack>

#define ll long long
#define pb push_back
#define f first
#define s second

using namespace std;

void solve(){
    string s; cin >> s;
    if(s == "MON") cout << 6 << endl;
    else if(s == "TUE") cout << 5 << endl;
    else if(s == "WED") cout << 4 << endl;
    else if(s == "THU") cout << 3 << endl;
    else if(s == "FRI") cout << 2 << endl;
    else if(s == "SAT") cout << 1 << endl;
    else if(s == "SUN") cout << 7 << endl;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.precision(20);
    solve();
    return 0;
}