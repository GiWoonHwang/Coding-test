/*
타입이란 해당 데이터가 메모리에 어떻게 저장되고, 프로그램에서 어떻게 처리되어야 하는지를 명시적으로 알려주는 역할을 한다
크게 정수형, 실수형, 문자형 그리고 bool형 타입으로 나눌 수 있다.

정수형 타입
정수란 부호를 가지고 있으며, 소수 부분이 없는 수를 의미한다.
정수형 데이터에 unsigned 키워드를 추가하면 부호를 나타내는 최상위 비트까지도 크기를 나타내는 데 사용할 수 있다.
signed 키워드는 음의 정수까지도 표현할 수있지만, 기본적으로 생략한다.

(signed) short    = 2바이트
unsigned short    = 2바이트
signed int        = 4바이트
unsigned int      = 4바이트
signed long       = 4바이트
unsigned long     = 4바이트
unsigned longlong = 8바이트
타입이 표현할 수 있는 범위를 벗어난 데이터를 저장하면 오버플로우(overflow)가 발생해 전혀 다른 값이 저장될 수 있습니다.

실수형
실수란 소수부나 지수가 있는 수를 가리키며, 정수보다 훨씬 넓은 표현 범위를 가진다.
하지만 컴퓨터에서 실수를 표현하는 방식은 오차가 발생할 수 밖에 없는데, 태생적 한계를 지닌다.
float       = 4바이트
double      = 8바이트
long double = 8바이트

auto 키워드를 이용한 선언
변수를 초기화할 때 특정 타입을 명시하는 대신에, auto 키워드를 사용하여 초깃값에 맞춰 타입이 자동으로 선언되도록 설정 가능
*/

#include <iostream>
using namespace std;

int main(){
    // 데이터 크기를 고려하지 않고 타입을 선언해 오버플로우가 발생한 경우
    int num = 2147483647;
    cout << "변수 num에 저장된 값은 " << num << "입니다." << endl;   // 2147483647
    num = 2147483648;
    cout << "변수 num에 저장된 값은 " << num << "입니다." << endl; // -2147483648
    return 0;
}

int main2(){
    // 소수점 16자리 가지는 실수를 float 타입과 double 타입의 변수에 각각 대입하는 예제
    float num01 = 3.1415926535897932; // float 타입의 유효 자릿수는 소수점 6자리
    cout << "변수 num01에 저장된 값은 " << num01 << "입니다." << endl;  // 3.14159274101257324219

    double num02 = 3.1415926535897932; // double 타입의 유효 자릿수는 소수점 15자리
    cout << "변수 num02에 저장된 값은 " << num02 << "입니다." << endl; //  3.14159265358979311600
    /*
    위의 예제에서 변수 num01에는 소수점 6자리까지만 정확한 값이 저장되어 있고, 소수점 7자리부터는 틀린 값이 저장되어 있습니다.

    또한, 변수 num02에는 소수점 15자리까지만 정확한 값이 저장되어 있고, 소수점 16자리부터는 틀린 값이 저장되어 있는 것을 확인할 수 있습니다.
    */
}