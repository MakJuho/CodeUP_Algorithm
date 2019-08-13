#include<iostream>
#include<string.h>

using namespace std;

int main(void){

    char ch;
    int i=97;

    cin >> ch;

    while(1){
        cout<< (char)i << " ";
        if((char)i == ch){
            break;
        } 
        i++;
    }

    

    return 0;
}