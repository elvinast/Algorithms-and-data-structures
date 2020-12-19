#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
using namespace std;
int main(){
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        string s1;
        char c;
        cin >> s1;
        int a[s1.size()];
        for (int j = 0; j < s1.size(); j++){
            a[j] = (int)s1[j];
        }
        int min = 1e9;
        for (int p = 0; p < s1.size(); p++){
            if (a[p] < min)
                min = a[p];
        }
        // cout<<(char)min;
        for (int k = 0; k < s1.size(); k++){
            if (s1[k] == s1[0])
                cout << (char)min;
            else if (s1[k] == min)
                cout << s1[0];
            else cout << s1[k];
        }
        cout << endl;
        // cout<<min;
    }

    return 0;
}