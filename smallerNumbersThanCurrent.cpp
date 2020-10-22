Q.Given the array nums, for each nums[i] find out how many numbers in the array are smaller than it.
  That is, for each nums[i] you have to count the number of valid j's such that j != i and nums[j] < nums[i].

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        map<int,int>m;
        for(int i=0;i<nums.size();i++)
            m[nums[i]]++;
        int sum=0;
        for(auto &i:m)
        {
            int temp=i.second;
            i.second=sum;
            sum+=temp;
            
        }
        vector<int>ans;
        for(int i=0;i<nums.size();i++)
                ans.push_back(m[nums[i]]);
        return ans;
    }
};
