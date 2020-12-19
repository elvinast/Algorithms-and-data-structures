#include <iostream>
using namespace std;

int bin(int k, int q){
    int l = q;
    int r = k;
    int res;
    while(l<r){
        cout << "ok" << endl;
        int mid = (l+r)/2;
        if(k%mid==0 && mid%q!=0){
            res = mid;
        }
        else if(k/mid>0){
            l = mid + 1;
        }
        else{
            r = mid - 1;
        }
    }
    return res;
}


int main(){
    int t;
    cin >> t;
    while (t > 0){
        long long p, q;
        cin >> p >> q;
        // for (int x = p; x > 0; x--){
        //     if (p % x == 0 && x % q != 0){
        //         cout << x << endl;
        //         break;
        //     }
        // }
        cout << bin(p, q) << endl;

        t--;
    }
    return 0;
}