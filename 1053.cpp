#include<iostream>
#include<string.h>

using namespace std;

int main(void){

    int ary[2] = {0,1};
    int input;

    while(1){
        cin >> input;
        if(input == ary[0] ){
            cout << ary[1] << endl;
            break;
        }else if(input == ary[1]){
            cout << ary[0] << endl;
            break;
        }
    }

    return 0;
}