#include <iostream>
using namespace std;
int upper_bound(int a[], int n, int l1){
    int l = 0;
    int r = n-1;
    int res = 0;
    while(l<r){
        int mid = (l+r)/2;
        if(a[mid]>=l1){
            res = mid+1;
            r = mid;
        }
        else{
            l = mid+1;
        }
    }
    if(a[r]>=l1)
        res = r+1;
    return res;
}

int lower_bound(int a[], int n, int r1){
    int l = 0;
    int r = n-1;
    int res = 0;
    while(l<r){
        int mid = (l+r)/2;
        if(a[mid]<=r1){
            res = mid+1;
            l = mid + 1;
        }
        else{
            r = mid-1;
        }
    }
    if(a[r]<=r1)
        res = r+1;
    return res;
}

int main(){
    int n, q;
    cin>>n>>q;
    int l1,r1,l2,r2;
    int a[n];
    
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<q;i++){
        cin>>l1>>r1>>l2>>r2;
        int cnt=0;
        for(int i=0;i<n;i++){
            if((lower_bound(a, n, l1)==upper_bound(a, n, r1)) || (lower_bound(a, n, l2)==upper_bound(a, n, r2))){
                cnt++;
            }
        }
        cout<<cnt<<"\n";
    }

    return 0;
}