class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        
        vector<vector<int>>ans;

        sort(nums.begin(),nums.end());

        for(int i = 0;i<n-2;i++){
            int target = -nums[i];
            int l = i+1,r = n-1;

            if(i>0 and nums[i]==nums[i-1]) continue;

            while(l<r){
                int sum = nums[l]+nums[r];
                if(sum == target){
                    ans.push_back({nums[i],nums[l],nums[r]});
                    l++;
                    r--;
                   
                    while(l<r && nums[l]==nums[l-1]) l++;
                    while(l<r && nums[r] == nums[r+1]) r--;

                }
                else if(sum < target) l++;
                else r--;
            }
        }
        return ans;
    }
};
