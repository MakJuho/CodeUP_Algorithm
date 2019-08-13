#include<iostream>
#include<string.h>
#include<sstream>
#include <fstream>
using namespace std;

int main(){

    char ch[10]; // A~F
    while(1){
        
        cin >> ch;
        if((int)ch[0]>=65 && (int)ch[0]<=70){
            break;
        }
    }
    
    int chToNum = (int)strtol(ch, NULL, 16);
    // cout << chToNum << endl;
    
    for(int i=1; i<=15; i++){
        int mul = chToNum*i;
        cout << uppercase;
        if(i==15){
            cout << ch << "*" << i << "=" << hex << toupper(mul);
            break;
        }
        cout << ch << "*" << i << "=" << hex << toupper(mul) << endl;
        
    }

    return 0;
}