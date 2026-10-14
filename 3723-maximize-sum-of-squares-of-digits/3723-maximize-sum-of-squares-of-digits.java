class Solution {
    public String maxSumOfSquares(int num, int sum) {
        if (sum > 9 * (long) num) return "";
        StringBuilder s=new StringBuilder();
        while(s.length()<num){
            if(sum==0){s.append('0');continue;}
            if(sum<10){
                s.append((char)('0'+sum));
                sum=0;
                continue;
            }
            s.append('9');
            sum-=9;
        }
        if(sum==0 && s.length()==num) {
            return s.toString();
        }
        return "";
    }
}