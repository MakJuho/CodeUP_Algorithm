#include<iostream>
#include<string.h>

using namespace std;

int main(void){

    string text;
    int cnt = 0;
    getline(cin,text);

    char* charText = new char[1000];

    strcpy(charText,text.c_str());

    while(1){
        
        if(charText[cnt]!=' '){
            cout << charText[cnt] << endl;
            if(charText[cnt] == 'q'){
                break;
            }
        }
        cnt++;
    }

    return 0;
}