#include<iostream>
#include<string.h>

using namespace std;

int main(){

    int board[19][19] = {0,};
    int val;
    for(int i=0; i<19; i++){
        for(int j=0; j<19; j++){
            cin >> val;
            board[i][j] = val;
        }
    }

    int n;
    int x,y;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> x >> y;
        for(int i=0; i<19; i++){
            if(board[x-1][i]==0){
                board[x-1][i] =1;
            }else{
                board[x-1][i] =0;
            }
        }

        for(int i=0; i<19; i++){
            if(board[i][y-1]==0){
                board[i][y-1] =1;
            }else{
                board[i][y-1] =0;
            }
        }

    
    }




    for(int i=0; i<19; i++){
        for(int j=0; j<19; j++){
            cout << board[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}