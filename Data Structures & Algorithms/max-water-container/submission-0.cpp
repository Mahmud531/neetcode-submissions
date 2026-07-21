class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();

        int l = 0,r = n-1;
        int area = 0;
        while(l<r){
            int currA = (r-l)*min(heights[l],heights[r]);
            area = max(currA,area);
            if(heights[l]<heights[r]){
                l++;
            }else{
                r--;
            }   
        }
        return area;
    }
};
