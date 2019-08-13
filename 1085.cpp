#include<iostream>
#include<string.h>

using namespace std;

int main(){

    int h,b,c,s;

    cin >> h >> b >> c >> s;

    float rlt = h*b*c*s;

    rlt = rlt / 8 / 1024 / 1024; 

    cout << fixed;
    cout.precision(1);

    cout<< rlt << " " << "MB" << endl;

    return 0;
}