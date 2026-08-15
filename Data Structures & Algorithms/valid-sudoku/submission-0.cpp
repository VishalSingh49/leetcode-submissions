class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<char> row[9];
        unordered_set<char> col[9];
        unordered_set<char> boxes[9];

        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                // first check do we hvae in row or not 
                char x = board[i][j];
                if(x == '.')
                    continue;

                if(row[i].count(x) || col[j].count(x))
                    return false;
                
                row[i].insert(x);
                col[j].insert(x);

                int box = (i / 3) * 3 + (j / 3);

                if(boxes[box].count(x))
                    return false;

                boxes[box].insert(x);
            }
        }
        return true;


    }
};
