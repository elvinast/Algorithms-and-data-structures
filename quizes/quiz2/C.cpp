#include <iostream>
#include <vector>
using namespace std;
//DONE
// vector <char> vows;
// vector <char> cons;

void quicksort(int l, int r, string &a) {
    int i = l;
    int j = r;
    int p = a[(l + r) / 2];

    while (i < j) {
        while (a[i] < p) i++;
        while (a[j] > p) j--;
        if (i <= j) {
            swap(a[i], a[j]);
            i++;
            j--;
        }
    }
    if (l < j)
        quicksort(l, j, a);
    if (i < r)
        quicksort(i, r, a);
}

int main(){
    int n;
    cin >> n;
    string s;
    string vows, cons;
    cin >> s;
    int j = 0;
    int k = 0;

    quicksort(0, s.size() - 1, s);

    for (int i = 0; i < s.size(); i++){
        if (s[i] == 'a' || s[i] == 'i' || s[i] == 'e' || s[i] == 'o' || s[i] == 'u'){
            swap(s[i], s[j]);
            // cout <<i << ' ' << j << endl;
            j++;
        }
    }
    
    vows = s.substr(0, j);
    cons = s.substr(j, s.size() - j);
    
    quicksort(0, vows.size() - 1, vows);
    quicksort(0, cons.size() - 1, cons);

    for(int i = 0; i < vows.size(); i++)
        cout << vows[i];

    for(int i = 0; i < cons.size(); i++)
        cout << cons[i];
    
    return 0;
}