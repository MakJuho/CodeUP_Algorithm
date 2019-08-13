#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;

int main(){

    int a,r,n;

    cin >> a >> r >> n;

    cout << a*pow(r,n-1) << endl;

    return 0;
}