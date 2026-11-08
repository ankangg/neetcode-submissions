class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int m=matrix.size();
        int n=matrix[0].size();
        int srow=0,scol=0,erow=m-1,ecol=n-1;
        while(srow<=erow && scol<=ecol){
            //top
            for(int i=scol;i<=ecol;i++){
                ans.push_back(matrix[srow][i]);
            }
            //right
            for(int j=srow+1;j<=erow;j++){
                ans.push_back(matrix[j][ecol]);
            }
            //bottom
            for(int i=ecol-1;i>=scol;i--){
                if(srow==erow){
                    break;
                }
                ans.push_back(matrix[erow][i]);
            }
            //left
            for(int j=erow-1;j>=srow+1;j--){
                if(scol==ecol){
                    break;
                }
                ans.push_back(matrix[j][scol]);
            }
            srow++,scol++;
            erow--,ecol--;
        } 
        return ans; 
    }
};
