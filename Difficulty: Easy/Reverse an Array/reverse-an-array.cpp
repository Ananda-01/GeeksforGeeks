class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        // code here
       int l=0;
       int r=arr.size()-1;
       while(l<r)
       {
           int tmp=arr[l];
           arr[l]=arr[r];
           arr[r]=tmp;
           l++;
           r--;
       }
    }
};