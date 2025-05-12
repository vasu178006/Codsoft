#include<iostream>
#include<string>
using namespace std;
int main() {
    char board[3][3] = {
        {' ', ' ', ' '},
        {' ', ' ', ' '},
        {' ', ' ', ' '}
    };
    char player1='X';
    char player2='O';
    char winner;
    char curr_player=player1;
    int row=-1;
    int column=-1;
    for(int i=0;i<=9;i++){
    cout << "     |     |     " << endl;
    cout << "  " << board[0][0] << "  |  " << board[0][1] << "  |  " << board[0][2] << "  " << endl;
    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;
    cout << "  " << board[1][0] << "  |  " << board[1][1] << "  |  " << board[1][2] << "  " << endl;
    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;
    cout << "  " << board[2][0] << "  |  " << board[2][1] << "  |  " << board[2][2] << "  " << endl;
    cout << "     |     |     " << endl;
    if(winner!=' '){
        break;
    }
    while(true){
    cout<<"The current player is "<<curr_player<<endl;
    cout<<"Enter the row and column to make a move(0-2)"<<endl;
    cin>>row;
    cin>>column;
    if(row<0||row>2||column<0||column>2){
        cout<<"Out of bounds,The move is invalid"<<endl;
        }
    else if(board[row][column]!=' '){
        cout<<"The tile is occupied,Hence invalid move!"<<endl;
        }
    else{
        break;
        }
    row=-1;
    column=-1;
    }
    board[row][column]=curr_player;
    if(curr_player==player1){
        curr_player=player2;
    }
    else{
        curr_player=player1;
    }
    //winning condition
    for(int row=0;row<3;row++){
        if(board[row][0] !=' '&& board[row][0]==board[row][1]==board[row][2]){
            winner=board[row][0];
        }
    }
    for(int column=0;column<3;column++){
        if(board[0][column] !=' '&& board[0][column]==board[1][column]==board[2][column]){
            winner=board[0][column];
            }
        }
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2]) {
            winner = board[0][0];
    }
    else if(board[0][2]!=' '&& board[0][2]==board[1][1]&&board[1][1]==board[2][0]){
        winner=board[0][2];
        }
    if(winner!=' '){
        cout<<"the winner is "<<winner<<endl;
    }
    else{
        cout<<"Tie"<<endl;
        }
    }
}


