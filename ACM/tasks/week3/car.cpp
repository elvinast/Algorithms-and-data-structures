#include <iostream>
#include <vector>
using  namespace std;

int compute_min_refills(int dist, int tank, vector<int> & stops) {
    int n = 0;
    int cur = 0;
    while (cur <= tank){
        int last = cur;
        while (cur <= tank and stops[cur + 1] - stops[last] <= 1){
            cur++;
        }
        if (cur == last) return -1;
        if (cur <= tank){
            n++;
        }
    }
    return n;
}


int main() {
    int d = 0;
    cin >> d;
    int m = 0;
    cin >> m;
    int n = 0;
    cin >> n;

    vector<int> stops(n);
    for (size_t i = 0; i < n; ++i)
        cin >> stops.at(i);

    cout << compute_min_refills(d, m, stops) << "\n";

    return 0;
}
