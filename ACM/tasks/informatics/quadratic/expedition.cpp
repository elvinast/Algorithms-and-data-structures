#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    long long n, m, i, j, k;
    cin >> n >> m;
    vector <long long> plot;
    vector <long long> msk;
    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            int ne;
            cin >> ne;
            plot.push_back(ne);
        }
    }
    cin >> k;
    for(i = 0; i < k; i++){
        int add;
        cin >> add;
        msk.push_back(add);
    }
    sort(plot.begin(), plot.end());
    sort(msk.begin(), msk.end());
    k = 0;
    i = plot.size() - 1;
    j = msk.size() - 1;
    while ((i + 1) * (j + 1) > 0){
        if (plot[i] >= msk[j]){
            k++;
            i--;
            j--;
        }
        else j--;
    }
    cout << k << endl;
    return 0;
}