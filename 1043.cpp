#include<iostream>
#include<string.h>

using namespace std;

int main(void){

    int doDivid; // 나누는 것
    int beingDivid; // 나눔 당하는 것
    int remainder;
   
    cin >> beingDivid >> doDivid;

    remainder = beingDivid%doDivid;

    cout << remainder << endl;

    return 0;
}