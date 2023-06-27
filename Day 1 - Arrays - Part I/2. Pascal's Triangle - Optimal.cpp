class Solution {
public:
    vector<vector<int>> generate(int numRows) 
    {
        vector<vector<int>> pXt(numRows);
        int i,j;
        pXt[0].push_back(1);
        for(i = 1;i<numRows;i++)
        {
            pXt[i].push_back(1);
            for(j=1;j<i;j++)
            {
                pXt[i].push_back(pXt[i-1][j-1] + pXt[i-1][j]);
            }
            pXt[i].push_back(1);
        }
        return pXt;
    }
};