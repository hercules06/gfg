class Solution {
  public:
    int findMaxProduct(vector<int>& arr, int k) {
        // code here
        int n=arr.size();
        int prod=1;
        int maxprod=INT_MIN;
        for(int i=0;i<k;i++){
            prod=prod*arr[i];
        }
        maxprod=prod;
        for(int i=k;i<n;i++){
            prod=(prod*arr[i])/arr[i-k];
           
            maxprod=max(maxprod,prod);
        }
        return maxprod;
    }
};