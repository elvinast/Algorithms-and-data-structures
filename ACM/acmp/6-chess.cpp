#include <iostream>
using namespace std;
int main(){
    string s;
    cin >> s;
    if (s[2] != '-'){
        cout << "ERROR" << endl;
        return 0;
    }
    if (s.size() != 5 || (!((s[0] >= 'A' && s[0] <= 'H') && (s[3] >= 'A' && s[3] <= 'H') && (s[1] >= '0' && s[1] <= '8') && (s[4] >= '0' && s[4] <= '8')))){
            cout << "ERROR" << endl;
            return 0;
    }
    if(s[0] == s[3] && s[1] == s[4]){
        cout << "YES" << endl;
        return 0;
    }
    
    if (s[0] == s[3]){
        cout << "NO" << endl;
        return 0;
    }

    
    // if ((s[0] >= 'A' && s[0] <= 'H') && (s[3] >= 'A' && s[3] <= 'H') && (s[1] >= '0' && s[1] <= '8') && (s[4] >= '0' && s[4] <= '8'))
    //     cout << "ok4" << endl;
    
    else if ((s[0] >= 'A' && s[0] <= 'H') && (s[3] >= 'A' && s[3] <= 'H') && (s[1] >= '0' && s[1] <= '8') && (s[4] >= '0' && s[4] <= '8')){
        int y1 = (int)s[1] - '0';
        int y2 = (int)s[4] - '0';

        int x1 = (int)s[0] - 'A' + 1;
        int x2 = (int)s[3] - 'A' + 1;
        // cout << "ok" << endl;
        // cout << x1 << ' ' << x2 << endl;
        if (abs(y2 - y1) * abs(x1 - x2) == 2){
            cout << "YES" << endl;;
            return 0;
        }
        cout << "NO" << endl;
        return 0;
    }
    cout << "ERROR" << endl;
    return 0;
}