class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        int n = nums.size();

        unordered_map<long long,int>mp;

        for(int i = 0;i<n;i++){
            mp[nums[i]] = i;
        }

        for(int i = 0;i<n;i++){
            int need = target-nums[i];

            if(mp.count(need) and mp[need] != i){
                if(i<mp[need]){
                    ans.push_back(i);
                    ans.push_back(mp[need]);
                }
                else{
                                 
                    ans.push_back(mp[need]);
                    ans.push_back(i);
                }
                break;
            }
        }

        return ans;      
    }
};
