  Q.Given an array of integers arr, write a function that returns true if and only if the number of occurrences of each value in the array is unique.

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        if(arr.size()==1)
            return true;
        map<int,int>m;
        for(auto i:arr)
           m[i]++;
        
        set<int>s;
        for(auto i:m)
       {
        if(s.find(i.second)!=s.end())
            return false;
        else
            s.insert(i.second);    
        
      }
    return true;
   }
};
