#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<char> v;
    for(int i = 0; i < s.size(); i++){
        if (i + 1 < n && s[i] != s[i + 1]){
            v.push_back(s[i]);
            v.push_back(s[i + 1]);
            i++;
        }
    }
    cout << n - v.size() << endl;
    for(int i = 0; i < v.size(); i++)
        cout << v[i];
    return 0;
}