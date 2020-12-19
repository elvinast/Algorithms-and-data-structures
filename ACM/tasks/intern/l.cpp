#include <iostream>
#include <vector>
using namespace std;
int main() {
    
    int n, m;
    cin>>n>>m;
    vector<int>v(n+n, 0);
    int sum = 0;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            sum+=a[i][j];
        }
        v[i] = sum;
        sum = 0;
    }
    int max = -1e9;
    int ind;
    for(int i=0;i<n;i++){
        if(v[i]>max){
            max = v[i];
            ind = i;
        }
    }
    cout<<ind+1<<endl;

    return 0;
}