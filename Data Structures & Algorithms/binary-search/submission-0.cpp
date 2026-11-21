class Solution {
public:
    int search(vector<int>& nums, int target) {
        int a=0,b=nums.size()-1;
        while(a<=b){
            int k=a+(b-a)/2;
            if(nums[k]==target){
                return k;
            }
            if(nums[k]<target){
                a=k+1;
            }else{ 
                b=k-1;
            }    
        }
        return -1;
        
    }
};
