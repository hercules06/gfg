class Solution {
  public:
    vector<int> sumClosest(vector<int>& arr, int target) {
        // code here
        int n=arr.size();
        sort(arr.begin(),arr.end());
        int i=0;
        int j=n-1;
        int min=INT_MAX;
         vector<int> ans;
        while(i<j){
            int sum=arr[i]+arr[j];
            if(abs(target-sum)<min){
                min=abs(target-sum);
                ans={arr[i],arr[j]};
                
            }
            else if(sum<target){
                i++;
            }
            else if(sum>target){
                j--;
            }
            else{
                return ans;
            }
        }
        return ans;}
};