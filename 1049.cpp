#include<iostream>
#include<string.h>

using namespace std;

// 두 정수(a, b)를 입력받아 

// a가 b보다 크면 1,

// a가 b와 같거나 b가 a보다 크다면 0

// 을 출력하는 프로그램을 작성해보자.

int main(void){

    int a,b;

    cin >> a >> b;

    if(a>b){
        cout << 1 << endl;
    }
    else{
        cout << 0 << endl;
    }

    return 0;
}