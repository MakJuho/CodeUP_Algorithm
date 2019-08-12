#include<iostream>
#include<string.h>

using namespace std;

int main(void){

    string input;
    string minus = "-";
    string rlt;
    cin >> input;

    if(input[0] == '-'){
        rlt = input.erase(0,1);
    }else if(input[0] == '0'){
        rlt = input;
    }else{
        rlt = minus.append(input);
    }
    cout << rlt << endl;
    return 0;
}