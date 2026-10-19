
class Solution {
public:
    int cnt=0;
    bool isValid(int i,int j,int n,vector<string>&A) {
        // column
        int r=i,cl=j;
        while(r>=0){
            if(A[r][cl]=='Q')return false;
            r--;
        }
        // upper left diagonal
        r=i,cl=j;
        while(r>=0 && cl>=0){
            if(A[r][cl]=='Q')return false;
            r--;
            cl--;
        }
        // upper right diagonal
        r=i,cl=j;
        while(r>=0 && cl<n){
            if(A[r][cl]=='Q') return false;
            r--;
            cl++;
        }
        return true;
    }
    void solve(int row,vector<string>& A,int n){
        if(row==n){
            cnt++;
            return;
        }
        for(int cl=0;cl<n;cl++){
            if(isValid(row,cl,n,A)){
                A[row][cl]='Q';
                solve(row+1,A,n);
                A[row][cl]='.';
            }
        }
    }
    int totalNQueens(int n){
        vector<string>A(n,string(n,'.'));
        solve(0,A,n);
        return cnt;
    }
};
