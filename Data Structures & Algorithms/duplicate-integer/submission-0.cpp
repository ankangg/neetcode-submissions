class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n=nums.size();
        if(nums.size()==0){
            return false;
        }
        int temp=nums[0];
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(temp==nums[j]){
                    return true;
                }
            }
            temp=nums[i+1];
        }
        return false;
    }
};