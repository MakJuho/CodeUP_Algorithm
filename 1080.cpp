#include<iostream>
#include<string.h>

using namespace std;

int main(){

    int i=1;
    int sum=0;
    int goal;

    cin >> goal;
    while(1)
    {
        if(goal <= sum){
            i--;
            cout << i << endl;
            break;
        }
        sum = sum + i;
        // cout << sum << endl;
        i++;
        
    }
    return 0;
}