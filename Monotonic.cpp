Q.An array is monotonic if it is either monotone increasing or monotone decreasing.
  An array A is monotone increasing if for all i <= j, A[i] <= A[j].  An array A is monotone decreasing if for all i <= j, A[i] >= A[j].
  Return true if and only if the given array A is monotonic.
  
  class Solution {
public:
    bool isMonotonic(vector<int>& A) {
        int len=A.size();
        int count1=1;
        int count2=1;
        for(int i=1;i<len;i++){
            if(A[i]>=A[i-1]){
                count1++;
            }
            if(A[i]<=A[i-1]){
                count2++;
          }
        } 
       if(count1==len || count2==len){
             return true;
       }
   return false;
    }
};

/*or*/

class Solution {
public:
    bool isMonotonic(vector<int>& A) {
        return std::is_sorted(A.begin(),A.end())||is_sorted(A.rbegin(),A.rend());
    }
};
