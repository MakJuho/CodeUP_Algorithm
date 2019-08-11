#include<iostream>
#include<string.h>

using namespace std;

int main(){

    string fNum;

    cin >> fNum;

    char* strNum = new char[1000];

    strcpy(strNum, fNum.c_str());

    string integer = strtok(strNum, ".");

    string decimal = strtok(NULL, "");
    
    cout << integer << endl;
    cout << decimal;

    return 0;
}