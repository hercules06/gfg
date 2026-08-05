class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        // code here
        int n=arr.size();
        int sum=0;
        for(int i=0;i<k;i++){
            sum+=arr[i];
        }
        int maxsum=sum;
        for(int j=k;j<n;j++){
            sum=sum+arr[j]-arr[j-k];
            maxsum=max(maxsum,sum);
        }
        return maxsum;
        
    }
};