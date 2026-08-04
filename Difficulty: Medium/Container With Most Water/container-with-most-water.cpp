class Solution {
  public:
    int maxWater(vector<int> &arr) {
        // code here
        int n=arr.size();
        
        int max_area=INT_MIN;
        int l=0;
        int r=n-1;
        
        while(l<=r){
            int width=r-l;
            int height=min(arr[l],arr[r]);
            int area=width*height;
            max_area=max(max_area,area);
            if(arr[l]<arr[r]){
                l++;
                
            }
            else{
                r--;
            }
        }
        return max_area;
        
    }
};