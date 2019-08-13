#include<iostream>
#include<string.h>

using namespace std;

int main(){

    int goal;
    int cnt=1;
    cin >> goal;

    while(cnt <= goal){
        if(cnt%3==0){
            cout << "X" << " ";
        }else{
            cout << cnt << " ";
        }
        cnt++;
    }

    return 0;
}