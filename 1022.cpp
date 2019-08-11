#include<iostream>
#include<string.h>

using namespace std;

int main(){

    string text;
    // 문자열 입력
    
    // cin의 경우 공백문자일 경우 입력이 끊기게 된다.

    getline(cin, text);

    cout << text;

    return 0;
}