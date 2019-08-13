#include<iostream>
#include<string.h>

using namespace std;

int main(void){

    int num1,num2,num3,rlt;

    cin >> num1 >> num2 >> num3;

    // rlt = (num1>num2)?(num1>num3?num1:num3):(num2>num3?num2:num3);

    rlt = (num1<num2)?(num1<num3?num1:num3):(num2<num3?num2:num3);

    cout << rlt << endl;

    return 0;
}