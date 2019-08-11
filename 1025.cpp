#include<iostream>
#include<string.h>
#include<math.h>


using namespace std;

int main(){
    int fiveInt;

    while(1){
        
        cin >> fiveInt;

        if(10000<fiveInt && fiveInt<99999){
            break;
        }
    }

    for(int i=4; i>-1; i--){
        int digit = pow(10,i);
        int mulDigit = pow(10,i);
        cout << "[" << fiveInt/digit % 10 *mulDigit << "]"<< endl;
    }
   
    return 0;
}