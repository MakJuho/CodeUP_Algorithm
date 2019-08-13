#include<iostream>
#include<string.h>

using namespace std;

int main(){

    int m,n;

    cin >> m >> n;

    for(int i=1; i<=m; i++){
        for(int j=1; j<=n; j++){
            cout << i << " " << j << endl;
        }
    }

    return 0;
}