#include<iostream>
#include<string.h>

using namespace std;

int main(){

    int cnt;
    int stu;
    int book[23]= {0,};

    cin >> cnt;

    for(int i=0; i<cnt; i++){
        cin >> stu;
        book[stu-1]++;
    }

    // cout << sizeof(book)/sizeof(int) << endl;
    for(int i=0; i<sizeof(book)/sizeof(int); i++){
        cout << book[i]<< " ";
    }




    return 0;
}