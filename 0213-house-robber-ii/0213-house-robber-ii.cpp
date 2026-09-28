class Solution {
public:
    int dp[101];
    int solve(vector<int>&nums,int n,int i){
        if(i>n)return 0;

        if(dp[i]!=-1)return dp[i];

        return dp[i]=max(
            nums[i]+solve(nums,n,i+2),solve(nums,n,i+1)
        );
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1)return nums[0];
        memset(dp,-1,sizeof(dp));
        int r1=solve(nums,n-2,0);
        memset(dp,-1,sizeof(dp));
        int r2=solve(nums,n-1,1);
        int maxi=max(r1,r2);
        return maxi;
    }
};