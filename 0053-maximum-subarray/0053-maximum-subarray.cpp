class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curr =0, mSum = INT_MIN;
        for(int i =0;i<nums.size();i++)
        {
            curr += nums[i];
            mSum = max(curr, mSum);
            
            if(curr<0)
                curr =0;
            

        
        }
        return mSum;
        
        
    }
};