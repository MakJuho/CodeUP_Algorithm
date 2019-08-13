// 첫 줄에 합
// 둘째 줄에 차(a-b)
// 셋째 줄에 곱,
// 넷째 줄에 a를 b로 나눈 몫,
// 다섯째 줄에 a를 b로 나눈 나머지,
// 여섯째 줄에 a를 b로 나눈값(실수, 소수점 셋째 자리에서 반올림해 둘째 자리까지 출력)
// 을 출력한다.
#include<iostream>
#include<string.h>

using namespace std;

int main(void){

    int a, b;
    
    cin >> a >> b;

    cout << a + b << endl;
    cout << a - b << endl;
    cout << a * b << endl;
    cout << (a / b) << endl;
    cout << (a % b) << endl;

    cout << fixed;
    cout.precision(2);
    cout << ((float)a / (float)b) << endl;
    return 0;
}