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
