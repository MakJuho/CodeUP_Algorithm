#include<iostream>
#include<string.h>

using namespace std;

int main(void){

    char* input= new char[1000];
    
    cin >> input;

    if(input[0]=='-'){
        cout << "minus" <<endl;
    }else{
        cout << "plus" <<endl;
    }

    int intInput = atoi(input);

    if((intInput%2)==0){
        cout << "even" << endl;
    }else{
        cout << "odd" << endl;
    }

    return 0;
}