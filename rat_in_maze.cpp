#include<bits/stdc++.h>
using namespace std;

void printmaze(int** solution, int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<solution[i][j]<<" ";  
        }
    }
    cout<<endl;
}

void mazehelper(int maze[][20], int** solution, int n, int x, int y){
    
    if(x==n-1 && y==n-1){
        solution[x][y] = 1;
        printmaze(solution,n);
        return;
    }

    if(x>=n || y>=n || y<n || x<n || solution[x][y] == 1 || maze[x][y] == 0){
        return;
    }
    solution[x][y] = 1;
    mazehelper(maze,solution,n,x-1,y);     // up
    mazehelper(maze,solution,n,x+1,y);     // down
    mazehelper(maze,solution,n,x,y-1);     // left
    mazehelper(maze,solution,n,x,y+1);    // right
    solution[x][y] = 0;
}

void ratinmaze(int maze[][20], int n ){
    int** solution = new int*[n];    //  dynamic array initalization
    for(int i=0; i<n;i++){
        solution[i] = new int*[n];
    }
    mazehelper(maze,solution,n,0,0);
}

int main(){

    return 0;
}