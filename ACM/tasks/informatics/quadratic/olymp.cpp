#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct res { 
    int number;
    int mark;
};

bool cmp(res a, res b) { 
    if(a.mark == b.mark) return a.number < b.number;
    return a.mark >  b.mark;
}

int main() {
    int n;
    cin >> n;

    vector <res> table(n); 

    for (int i = 0; i < n; i++) { 
        int temp;
        int s_temp;
        cin >> temp >> s_temp;
        res struct_temp;
        struct_temp.number = temp;
        struct_temp.mark = s_temp;
        table[i] = struct_temp;
    }
    sort(table.begin(), table.end(), cmp);

    for (int i = 0; i < table.size(); i++) {
        cout << table[i].number << " " << table[i].mark << endl;
    }
    return 0;
}