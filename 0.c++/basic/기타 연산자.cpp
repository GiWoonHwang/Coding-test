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
    int a = 15, b = 8; // 두 연산식을 하나의 연산식으로 나타내고자 할때, 둘 이상의 인수를 함수로 전달하고자 할 때

    result = (num1 > num2) ? num1 : num2;    
    cout << "둘 중에 더 작은수는 " << result << "입니다."; // 둘 중에 더 작은수는 10입니다.
    
    /*
    sizeof 연산자: 사용자의 컴퓨터 환경에 따라 타입에 해당되는 메모리의 크기가 달라질 수 있다.
    sizeof 연산자는 단항 연산자로 피연산자의 크기를 바이트 단위로 반환한다.
    sizoof 연산자에 변수나 상수가 피연산자로 전달되면, 해당 변수나 상수값에 해당하는 타입의 크기를 반환합니다.
    */
    cout << " char형 데이터에 할당되는 메모리의 크기는 " << sizeof(char) << " 바이트입니다." << endl; //  char형 데이터에 할당되는 메모리의 크기는  1 바이트입니다.

    cout << " short형 데이터에 할당되는 메모리의 크기는 " << sizeof(short) << " 바이트입니다." << endl; // short형 데이터에 할당되는 메모리의 크기는  2 바이트입니다.

    cout << " int형 데이터에 할당되는 메모리의 크기는 " << sizeof(int) << " 바이트입니다." << endl; //  int형 데이터에 할당되는 메모리의 크기는  4 바이트입니다.

    cout << " long형 데이터에 할당되는 메모리의 크기는 " << sizeof(long) << " 바이트입니다." << endl; // long형 데이터에 할당되는 메모리의 크기는  8 바이트입니다.

    cout << " long long형 데이터에 할당되는 메모리의 크기는 " << sizeof(long long) << " 바이트입니다." << endl; //  long long형 데이터에 할당되는 메모리의 크기는  8 바이트입니다.

    cout << " float형 데이터에 할당되는 메모리의 크기는 " << sizeof(float) << " 바이트입니다." << endl; // float형 데이터에 할당되는 메모리의 크기는  4 바이트입니다.

    cout << " double형 데이터에 할당되는 메모리의 크기는 " << sizeof(double) << " 바이트입니다." << endl; // double형 데이터에 할당되는 메모리의 크기는  8 바이트입니다.

    cout << "long double형 데이터에 할당되는 메모리의 크기는 " << sizeof(long double) << " 바이트입니다."; // long double형 데이터에 할당되는 메모리의 크기는 16 바이트입니다.

    return 0;


}