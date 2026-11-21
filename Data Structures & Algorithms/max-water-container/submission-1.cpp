class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxwater=0;
        int left =0;
        int right=heights.size()-1;
        while(left<right){
            int water= right-left;
            int highest=min(heights[left],heights[right]);
            int currwater=water*highest;
            maxwater=max(maxwater,currwater);
            heights[left]<heights[right]?left++:right--;
        }
        return maxwater;
    }
};
