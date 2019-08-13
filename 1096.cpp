#include<iostream>
#include<string.h>

using namespace std;

int main(){

    int whiteNum;
    int x,y;
    int board[19][19] = {0,};
    cin >> whiteNum;

    for(int i=0; i< whiteNum; i++){
        cin >> x >> y;
        board[x-1][y-1]=1;
    }

    for(int i=0; i<19; i++){
        for(int j=0; j<19; j++){
            cout << board[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}