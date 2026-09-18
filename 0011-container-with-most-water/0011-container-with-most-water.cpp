class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int maxi=0,cur=0;
        int left=0,right=n-1;
        while(left<right){
            cur=0;
            int ind=right-left;
            cout<<ind;
            cur=min(height[left],height[right]);
            cout<<cur;
            cout<<endl;
            cur*=ind;
            maxi=max(cur,maxi);
            if(height[left]<height[right])left++;
            else right--;
        }
        return maxi;
    }
};