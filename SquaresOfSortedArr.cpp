Q.Given an array of integers A sorted in non-decreasing order, return an array of the squares of each number, also in sorted non-decreasing order.


class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        vector<int> sq(A.size());
        for(int i=0;i<A.size();i++)
            sq[i]=A[i]*A[i];
    
           sort(sq.begin(),sq.end());
           return sq;
    }
};

/*or*/

class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
       for(auto &i:A)
           i=i*i;
        sort(A.begin(),A.end());
        return A;
    }
};
