#include <iostream>
using namespace std;

int main() {
    int l, m, n;
    cin >> l >> n >> m;
    int table[10001]={0};
    int start, end, i, t = 0;
    while (n--) {
        cin >> start >> end;
        table[start-1]++;
        table[end]--;        
    }
    for(i = 0; i < 10001; i++){
        t += table[i];
        table[i] = t;
    }
    for(i = 0; i < m; i++){
        cin>>t;
        cout<<table[t-1]<<endl;
    }
    return 0;
    
}