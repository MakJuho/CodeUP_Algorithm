#include<iostream>
#include<string.h>

using namespace std;

int main(void){

    string time;

    cin >> time;

    char* charTime = new char[100];

    strcpy(charTime, time.c_str());

    char* hour = strtok(charTime, ":");

    char* minute = strtok(NULL, ":");

    char* second = strtok(NULL, ":");

    cout << atoi(minute) << endl;

    return 0;
}