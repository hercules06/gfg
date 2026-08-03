class Solution {
  public:
    int closest3Sum(vector<int> &arr, int target) {
        // code here
        sort(arr.begin(),arr.end());
        int n=arr.size();
        int min=INT_MAX;
        int ans=0;
        for(int i=0;i<n-2;i++){
            int j=i+1;
            int k=n-1;
            
            while(j<k){
                int sum=arr[i]+arr[j]+arr[k];
                if(abs(target-sum)<min){
                    min=abs(target-sum);
                    ans=sum;
                    
                }
                else if(abs(sum - target) == min) {
            	ans = max(ans, sum);
            }
               
             if(sum<target){
                    j++;
                }
                else if(sum>target){
                    k--;
                }
                else{
                    return sum;
                }
            }
        }
        return ans;
    }
};