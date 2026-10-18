class Solution(object):
    def generate(self, numRows):
        tri=[]
        for i in range (numRows):
            cur=[]
            cur.append(1)
            if i>0:
                prev=tri[-1]
                for j in range(len(prev)-1):
                    cur.append(prev[j]+prev[j+1])
                cur.append(1)
            tri.append(cur)
        return tri