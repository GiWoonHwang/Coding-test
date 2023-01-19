/* 
삼항 연산자 다른 언어에는 존재하지 않는 c언어와 c++ 만의 독특한 연산자 입니다.
이 연산자는 c++에서 유일하게 피연산자를 세 개나 가지는 조건 연산자입니다.

조건식 ? 반환값: 반환값2
*/

#include <iostream>

using namespace std;

int main(){
    int num1 = 11;
    int num2 = 10;
    int result;

    result = (num1 > num2) ? num1 : num2;

    return 0;
}