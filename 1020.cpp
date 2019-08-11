#include<iostream>
#include<string.h>

using namespace std;

int main(){

    string registNum;

    cin >> registNum;

    char* tok = new char[1000];

    strcpy(tok, registNum.c_str());

    tok = strtok(tok, "-");

    string fNum = tok;

    tok = strtok(NULL, "-");

    string bNum = tok;

    // string append 함수
    string rlt = fNum.append(bNum);

    cout << rlt << endl;
    
}