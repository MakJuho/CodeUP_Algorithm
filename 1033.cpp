#include<iostream>
#include<string.h>

using namespace std;

int main(void){

    int decimal;

    cin >> decimal;
    
    // 대문자로 출력
    cout.setf(ios::uppercase);
    cout << hex << decimal << endl;
    
    return 0;
}