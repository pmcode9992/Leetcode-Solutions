class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        int row=-1; 

        //find correct row
        for(int i =0;i< rows;i++){
            if(matrix[i][0] <= target && matrix[i][cols-1] >= target ){
                row = i;
                break;
            } 

        }
        cout<<row<<endl;
        if(row == -1){
            return false;
        }
        
        // find value in row
        int l =0;
        int r = cols -1;
        int m ;
        while(l<=r){
            m = (r-l)/2 + l;
            if (target > matrix[row][m]){
                //check right 
                l = m + 1;
            }
            else if(target < matrix[row][m]){
                //check left
                r = m -1;
            }
            else{
                return true;
            }
        }
        return false;


    }
};