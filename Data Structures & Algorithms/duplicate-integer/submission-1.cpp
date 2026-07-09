class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int>freq;
        int n = nums.size();
        bool isOk = false;

        for(int i =  0;i<n;i++){
            freq[nums[i]]++;
        }

        for(auto [first,second]:freq){
            if(second>=2){
                isOk = true;
                break;
            }
            
        }
        if(isOk) return true;
        else return false;
    }
};