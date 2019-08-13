#include<iostream>
#include<string.h>

using namespace std;

int main(void){

    int a;

    cin >> a;

    // 입력 된 정수를 비트단위로 참/거짓을 바꾼 후 정수로 출력해보자.
    cout << ~a << endl;


    return 0;
}