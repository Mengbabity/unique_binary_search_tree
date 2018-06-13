class Solution {
public:
    int numTrees(int n) {
        int res[n+1]={0};
        res[0]=1;
        res[1]=1;
        
        for(int i=2;i<n+1;i++)
            for(int j=1;j<=i;j++)
                res[i]+=res[j-1]*res[i-j];   //将i作为n进行内循环，依次计算2...n
        
        return res[n];//多了0，所以有n+1个
        
    }
};
