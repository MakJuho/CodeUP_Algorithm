#include<iostream>
#include<string.h>

using namespace std;

string str_arr[1000];

int main(void){

    string time;

    cin >> time;

    char* str_buff = new char[1000];
    strcpy(str_buff, time.c_str());

    char* tok = strtok(str_buff,":");
    string hour = tok;
    // cout << tok << endl;    
    tok = strtok(nullptr, ":");
    string minute = tok;
    // cout << tok << endl;

    cout << hour << ":" << minute << endl;
    return 0;
}