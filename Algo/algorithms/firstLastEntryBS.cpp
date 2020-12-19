int bin_search(const vector<int>& nums, int target,bool bound){
        int l = 0, r = nums.size()-1, res = -1;
        while(l <= r){
            int mid = l + (r-l)/2;
            if(nums[mid] == target){
                res = mid;
                if(bound) l = mid+1;
                else r = mid-1;
            }
            else if(nums[mid] < target) l = mid+1;
            else r = mid-1;
        }
        return res;
    }
vector<int> searchRange(vector<int>& nums, int target) {
    return {bin_search(nums,target,false), bin_search(nums,target,true)};     
}