#include<iostream>
#include<string.h>

using namespace std;

int main(){

    int map[10][10] = {0,};
    int status;
    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            cin >> status;
            map[i][j] = status;
        }
    }

    int cur_x=2, cur_y=2;
    
    while(1){
        // cout << "(" << cur_x<< ","<< cur_y << ")" << endl;

        
        
        //먹이 발견
        if(map[cur_x-1][cur_y-1]==2){
            map[cur_x-1][cur_y-1]=9;
            break;
        }

        map[cur_x-1][cur_y-1]=9;

        // 오른쪽 한칸 움직이기
        if(map[cur_x-1][cur_y]!=1){
            cur_y=cur_y+1;
                    // cout << "B"<< endl;
        }
        // 오른쪽 못가면 아래로 움직이기
        else if(map[cur_x][cur_y-1]!=1){
            cur_x=cur_x+1;
        }
        
        //움직일 수 없으면 STOP
        else{
            break;
        }
        
    }
    
    // cout << "결과" << endl;

    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            cout << map[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}