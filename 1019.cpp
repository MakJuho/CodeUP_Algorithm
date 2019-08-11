#include<iostream>
#include<string.h>

using namespace std;

int main(void){

    string string_date;
    int year;
    int month;
    int day;

    cin >> string_date;
// string을 파싱할 수 없음
// string -> char* 형으로 변경 후, strtok이용 파싱.
    char* char_date= new char[1000];
    strcpy(char_date, string_date.c_str());

// 다음 포인터를 잘라서 포인터를 반환
    char_date = strtok(char_date, ".");
    year = atoi(char_date);

    char_date = strtok(NULL, "."); 
    month = atoi(char_date);

    char_date = strtok(NULL, ".");
    day = atoi(char_date);
    
    cout.fill('0');

    cout.width(4);
    cout << year << ".";  
    cout.width(2);
    cout<<month <<".";    
    cout.width(2);
    cout<< day ;

    return 0;
}