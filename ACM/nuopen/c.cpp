#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#define ll long long

using namespace std;

int l,r,mid=-1e9-1,curmid;
void SubArrays(vector<int> arr, int start, int end) 
{
    if (end == arr.size())
        return; 
    else if (start > end)
        SubArrays(arr, 1, end + 1); 
    else
    {
        vector<int> temp;
        for (int i=start;i<end;i++) temp.push_back(arr[i]);
        temp.push_back(arr[end]);

        // cout<<"-> ";
        // for(int i=0;i<temp.size();i++)
        //     cout<<temp[i]<<" ";
        // cout<<endl;

        sort(temp.begin(),temp.end());

        if(temp.size()%2==0) curmid=temp[temp.size()/2 - 1];
        else curmid=temp[(temp.size()+1)/2 - 1];
        // cout<<curmid<<" "<<mid<<endl;
        if(curmid>mid)
        {
            mid=curmid;
            l=start;
            r=end;
        }
        else if(curmid==mid)
        {
            if(end-start+1>r-l+1)
            {
                mid=curmid;
                l=start;
                r=end;
            }
        }
        // all.push_back(temp); 
        SubArrays(arr, start + 1, end); 
    } 
    return; 
} 

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.precision(20);
    int n; cin>>n;
    vector<int> arr(n+1);
    arr[0]=-1e9-1;
    for(int i=1;i<=n;i++) cin>>arr[i];
    SubArrays(arr, 1, 1); 
    cout<<l<<" "<<r;
   return 0; 
}