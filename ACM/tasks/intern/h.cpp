#include <iostream>
#include <map>
using namespace std;
int main(){
int n;
cin >> n;
int sum = 0;
map <string, int> m;
int k;
for(int i = 0; i < n; i++){
    string s;
    cin >> s >> k;
    if (m[s] > k)
        m[s] = k;
    sum += k;
}
// cout << sum << endl;
map <string,int> :: iterator it;
// for(it = m.begin(); it != m.end(); it++){
//     it->second = (it->second * sum) / 100;
// }
for(it = m.begin(); it != m.end(); it++){
    cout << it->first << " " << it->second << endl;
}
    return 0;
}