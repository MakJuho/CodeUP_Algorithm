#include<iostream>

using namespace std;

int main(void){

    double fNum;

    cin >> fNum;

// 소수점 지정
    cout << fixed;
    cout.precision(2);

    cout << fNum << endl;
    return 0;
}