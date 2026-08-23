class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
    int size=arr.size()+1;
    int elexor=0;
    int loopxor=0;
    for(int i=0;i<size-1;i++){
        elexor^=arr[i];
    }
    for(int i=1;i<=size;i++){
        loopxor^=i;
    }
    return elexor^loopxor;
    }
};