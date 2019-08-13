#include<iostream>
#include<string.h>

using namespace std;

int main(void){

    int a,b,c;

    cin >> a >> b;

    c = (a | b)-(a & b);

    cout << c << endl;

    return 0;
}