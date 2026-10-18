class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int>a;
        a.push_back(1);
        while(rowIndex){
            a.push_back(1);
            int n=a.size();
            for(int i=n-2;i>=1;i--){
                a[i]=a[i]+a[i-1];
            }
            rowIndex--;
        }
        return a;
    }
};