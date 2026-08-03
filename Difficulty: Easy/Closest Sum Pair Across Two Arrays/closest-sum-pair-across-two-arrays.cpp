class Solution {
  public:
    vector<int> findClosestPair(vector<int> &arr1, vector<int> &arr2, int x) {
        // code here
        int n=arr1.size();
        int m=arr2.size();
        int i=0;
        int j=m-1;
        vector<int>ans;
        int min=INT_MAX;
        while(i<n && j>=0){
            int sum=arr1[i]+arr2[j];
            if(abs(x-sum)<min){
                min=abs(x-sum);
                ans={arr1[i],arr2[j]};
                
            }
            else if(sum<x ){
                i++;
                
            }
            else if(sum>x){
                j--;
            }
            else{
                return ans;
            }
        }
        return ans;
    }
};