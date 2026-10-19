class Solution {
public:
    bool isValid(int i, int j, int n, vector<string>& A){
        // column
        int r=i,cl=j;
        while(r>=0){
            if(A[r][cl]=='Q') return false;
            r--;
        }
        // upper left diagonal
        r=i,cl=j;
        while(r>=0 && cl>=0){
            if(A[r][cl]=='Q') return false;
            r--; cl--;
        }
        // upper right diagonal
        r=i,cl=j;
        while(r>=0 && cl<n){
            if(A[r][cl]=='Q') return false;
            r--; cl++;
        }
        return true;
    }
    void solve(int row,vector<vector<string>>&res,vector<string>&A,int n){
        if(row==n){
            res.push_back(A);
            return;
        }
        for(int cl=0;cl<n;cl++){
            if(isValid(row,cl,n,A)){
                A[row][cl]='Q';
                solve(row+1,res,A,n);
                A[row][cl]='.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> res;
        vector<string> A(n, string(n,'.'));
        solve(0,res,A,n);
        return res;
    }
};
