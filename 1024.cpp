#include<iostream>
#include<string.h>

using namespace std;

int main(){



    char* word = new char[160];
    memset(word,'0',160);

    cin >> word;

    int cnt=0;

    while(1){
        cout << "'" << word[cnt] << "'"<< endl;
        
        cnt++;

        if(word[cnt] == '\0'){
            break;
        }
    }

    return 0;
}