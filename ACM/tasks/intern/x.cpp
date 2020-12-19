#include <iostream>
#include <map>
#include <vector>
using namespace std;
int main(){
int sz;
cin >> sz;
int sum = 0;
// map <string, int> m;
double k;
vector<double> p(sz);
vector<string> n(sz);
for(int i = 0; i < sz; i++){
    string s;
    cin >> n[i] >> p[i];
    sum += p[i];
}
// cout << sum << endl;
// map <string,int> :: iterator it;
for(int i = 0; i < sz; i++){
    p[i] = (double)(((double)(p[i] * 100)) / (double)sum);
}
for (int i = 0; i < sz; i++){
    for(int j = 0; j < sz - 1; j++){   
        if (p[j] > p[j + 1])
            swap(p[j], p[j + 1]);
            swap(n[i], n[j + 1]);
    }
}
for(int i = 0; i < sz; i++){
    cout << n[i] << " " << p[i] << "%" << endl;
}
    return 0;
}