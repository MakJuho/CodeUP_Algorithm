#include<iostream>
#include<string.h>

using namespace std;

int main(void){
    int input;
    while(1){
        cin >> input;

        if(input == 0){
            cout << 0 << endl;
            break;
        }else{
            cout << input << endl;
        }
        

    }
    return 0;
}