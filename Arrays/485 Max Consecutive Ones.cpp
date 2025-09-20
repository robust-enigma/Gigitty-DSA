class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int i=0;
        int cnt=0;
        int max_count=0;

        while(i<nums.size())
        {
            if(nums[i]==1)
            {
                cnt++;
            }
            else if(nums[i]==0)
            {
                max_count=max(max_count,cnt);
                cnt=0;
            }

            i++;
        }
        max_count=max(cnt,max_count);
        return max_count;
    }
};
