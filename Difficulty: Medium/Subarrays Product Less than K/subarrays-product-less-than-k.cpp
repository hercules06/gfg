class Solution {
  public:
    int countSubarray(vector<int>& arr, int k) {
        // code here
        int n=arr.size();
        if(k<=1){
            return 0;
        }
        int c=0;
        int l=0;
        int prod=1;
        for(int r=0;r<n;r++){
            prod=prod*arr[r];
            while(prod>=k){
                prod=prod/arr[l];
                l++;
            }
            c=c+(r-l+1);
        }
        return c;
    }
};