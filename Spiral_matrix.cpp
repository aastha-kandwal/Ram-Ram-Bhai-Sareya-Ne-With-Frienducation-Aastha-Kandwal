class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> vc;
        int col1=0;
        int col2=matrix[0].size()-1;
        int row1=0;
        int row2=matrix.size()-1;
        while(col1<col2 && row1<row2){
            for(int x=col1;x<=col2;x++){
                vc.emplace_back(matrix[row1][x]);
            }
            row1+=1;
            for(int x=row1;x<=row2;x++){
                vc.emplace_back(matrix[x][col2]);
            }
            col2-=1;
            for(int x=col2;x>=col1;x--){
                vc.emplace_back(matrix[row2][x]);
            }
            row2-=1;
            for(int x=row2;x>=row1;x--){
                vc.emplace_back(matrix[x][col1]);
            }
            col1+=1;
        }
        if(row1==row2 && col1==col2){
            vc.emplace_back(matrix[row1][col1]);
        }
        else if(row1==row2 && col1!=col2){
            for(int x=col1;x<=col2;x++){
                vc.emplace_back(matrix[row1][x]);
            }
        }
        else if(row1!=row2 && col1==col2){
            for(int x=row1;x<=row2;x++){
                vc.emplace_back(matrix[x][col1]);
            }
        }
                
        return vc;
    }
};
