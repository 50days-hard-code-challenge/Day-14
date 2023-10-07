class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>p;
        if(nums.size()==1 && nums[0]==target){
            return {0,0};
        }
        int mid;
        int l=0;
        int flag=0;
        int ans=-1;
        int h=nums.size()-1;
        while(l<=h){
            mid=l+(h-l)/2;
            if(nums[mid]==target){
                ans=mid;
                h=mid-1;
            }
            else if(nums[mid]<target){
                l=mid+1;
            }
            else
            { h=mid-1;
            }
        }
        if(ans==-1){
            return {-1,-1};
        }
        p.push_back(l);
        l=0;
        h=nums.size()-1;
        while(l<=h){
            mid=l+(h-l)/2;
            if(nums[mid]==target){
                l=mid+1;
                ans=mid;
            }
            else if(nums[mid]<target){
                l=mid+1;
            }
            else
            { h=mid-1;
            }
        }
        p.push_back(ans);
        return p;
    }
};
