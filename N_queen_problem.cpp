/*
    Problem : Queens on Board
*/
#include<bits/stdc++.h>

using namespace std;

int board[11][11];

bool Possible(int n , int row, int column){
    // check if the above that column any row has 1 
    for(int i=row-1;i>=0;i--){
        if(board[i][column]==1){
            return false;
        }
    }
    // now checking for left diagonal for the existance of 1
    for(int i =row-1, j=column-1;i>=0 && j>=0;i--,j--){
        if(board[i][j]==1){
            return false;
        }
    }
    // now checking for right diagonal for the existance of 1
    for(int i =row-1, j=column+1;i>=0 && j<n;i--,j++){
        if(board[i][j]==1){
            return false;
        }
    }
    return true;
}

void placequeenhelper(int n , int row){
    if(row == n){
        // we have reached a certain solution and we need to print and then return
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<board[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
        return;
    }
    // place the 1 on the position we think  is the best
    for(int i=0;i<n;i++){
        if(Possible(n,row,i)){
            board[row][i] = 1;        // putting 1 at the location
            placequeenhelper(n,row+1);   // recursion for next loc
            board[row][i] = 0;       //again putting 0 as 1 didn't quite worked out 
        }
    }

}

void placeNqueens(int n){

    memset(board,0,11*11*sizeof(int));      // initalizing the values of board as 0
    placequeenhelper(n,0);
}

int main(){
    placeNqueens(4);
    return 0;
}