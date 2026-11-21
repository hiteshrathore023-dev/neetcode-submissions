class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int tar) {
        int left=0;
        int right=nums.size()-1;
        while(left<right){
            int sum = nums[left]+nums[right];
            if(tar==sum){
            return{left+1,right+1};
            }
            else if(sum<tar){
                left++;
            }
            else{
                right--;
            }
        }
        return{};
        
    }
};
