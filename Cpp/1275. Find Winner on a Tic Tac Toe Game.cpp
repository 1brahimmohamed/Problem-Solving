class Solution {
public:
    string tictactoe(vector<vector<int>>& moves) {
        vector<vector<char>> board(3,vector<char>(3,'.'));

        int n = moves.size();
        //Now we initialize the board according to the moves
        for(int i=0;i<n;i++) {

            if(i%2 == 0) {  //For A
                board[moves[i][0]][moves[i][1]] = 'X';
            }
            else {  //For B
                board[moves[i][0]][moves[i][1]] = 'O';
            }
        }



        //Now we check if any column is completely filled with X or O
        for(int col=0;col<3;col++) {
            int countX = 0;
            int countO = 0;
            for(int row=0;row<3;row++) {

                if(board[row][col] == 'X')
                    countX++;
                else if(board[row][col] == 'O')
                    countO++;
            }

            if(countX == 3) return "A";
            if(countO == 3) return "B";
        }

        //Now we check if any row is completely filled with X or O
        for(int row=0;row<3;row++) {
            int countX = 0;
            int countO = 0;
            for(int col=0;col<3;col++) {
                if(board[row][col] == 'X')
                    countX++;
                else if(board[row][col] == 'O')
                    countO++;
            }
            if(countX == 3) return "A";
            if(countO == 3) return "B";
        }


        //Now we check if the primary diagonal is completely filled with X or O
        if(board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X')
            return "A";

        if(board[0][0] == 'O' && board[1][1] == 'O' && board[2][2] == 'O')
            return "B";


        //Now we check if the secondary diagonal is completely filled with X or O
        if(board[0][2] =='X' && board[1][1] == 'X' && board[2][0] == 'X')
            return "A";

        if(board[0][2] =='O' && board[1][1] == 'O' && board[2][0] == 'O')
            return "B";

        //Now we traverse the whole board to see if moves are pending
        int count = 0;
        for(int row=0;row<3;row++) {
            for(int col=0;col<3;col++) {
                if(board[row][col] == 'X' || board[row][col] == 'O')
                    count++;
            }
        }

        if(count < 9)
            return "Pending";

        return "Draw";
    }
};