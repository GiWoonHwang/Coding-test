/*
cpp에서 다른 타입끼리의 연산은 우선 피연산자들을 모두 같은 타입으로 만든 후에 수행됩니다.
이처럼 하나의 타입을 다른 타입으로 바꾸는 행위를 타입 변환이라고 한다.
cpp에서는 다음과 같은 경우 자동으로 타입 변환을 수행한다
1. 다른 타입끼리의 대입,산술 연산 시
2. 함수에 인수를 전달할 때

이때 표현 범위가 좁은 타입에서 표현 범위가 더욱 넓은 타입으로 타입 변환은 문제가 되지 않지만
넓은 타입에서 좁은 타입으로의 변환은 데이터의 손실이 발생한다

타입 변환의 종류
1. 묵시적 타입 변환(자동 타입 변환)
2. 명시적 타입 변환(강제 타입 변환)
*/

/*
묵시적 타입 변환은 대입 연산이나 산술 연산에서 컴파일러가 자동으로 수행해주는 타입 변환을 가리킨다.
대입 연산 시 연산자의 오른쪽에 존재하는 데이터 타입이 연산자의 왼쪽에 존재하는 데이터 타입으로 묵시적 타입 변환이 진행된다.
산술 연산 시에는 데이터의 손실이 최소화되는 방향으로 묵시적 타입 변환이 진행된다.
따라서 cpp에서는 다음과 같은 방향으로 자동 타입 변환이 이루어진다.
char -> short -> int -> long -> float -> double -> long double
*/
#include <iostream>
using namespace std;

int main(){
    int num1       = 3.1415;
    int num2       = 8.3E12;
    double num3    = 5; // double에 int가 들어감(큰곳에 작은곳) = 따라서 데이터 손실이 없음.
    double result1 = 5 + 3.14; // 손실이 최소화 되도록 double로 계산
    double result2 = 5.0f + 3.14; // 위와 같음

    cout << "num1에 저장된 값은" << num1 << "입니다." << endl; // num1에 저장된 값은 3입니다.
    cout << "num2에 저장된 값은" << num2 << "입니다." << endl; // num2에 저장된 값은 2147483647입니다.
    cout << "num3에 저장된 값은" << num3 << "입니다." << endl; // num3에 저장된 값은 5입니다.
    
    
    cout << "result1에 저장된 값은 " << result1 << "입니다." << endl; // result1에 저장된 값은 8.14입니다.
    cout << "result2에 저장된 값은 " << result2 << "입니다." << endl; // result2에 저장된 값은 8.14입니다.

}

/*
명시적 타입 변환(강제 타입 변환)
명시적 타입 변환은 사용자가 타입 캐스트 연산자를 사용하여 강제적으로 수행하는 타입 변환을 가리킵니다.
c++에서는 다음 두 가지 방식으로 명시적 타입 변환을 수행할 수 있습니다.

1.(변환할타입) 변환할 데이터 // c와 c++에서 둘다 가능
2. 변환할 타입 (변환할 데이터) // c++에서만 사용 가능
*/

int main2(){
    int num1 = 1;
    int num2 = 4;

    double result1 = num1 / num2; 
    double result2 = (double) num1 / num2;
    double result3 = double (num1) / num2;

    cout << "result1에 저장된 값은 " << result1 << "입니다." << endl; // result1에 저장된 값은 0입니다. => 피연산자가 int이기 때문에 소수부는 출력되지 않는다.
    cout << "result2에 저장된 값은 " << result2 << "입니다." << endl; // result2에 저장된 값은 0.25입니다. => 하나의 피연산자를 명시적으로 double로 바꿔줘야 정확한 값이 나옴
    cout << "result3에 저장된 값은 " << result3 << "입니다." << endl; // result3에 저장된 값은 0.25입니다. => c++에서만 사용하 수 있는 명시적 타입 변환 스타일의 사용법이다.
}