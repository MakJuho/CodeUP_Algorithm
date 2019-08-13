#include<iostream>
#include<string.h>

using namespace std;

int main(void){

    int nCnt;
    int input;
    cin >> nCnt;

    while(nCnt!=0){
        cin >> input;
        cout << input << endl; 
        nCnt--;
    }

    return 0;
}