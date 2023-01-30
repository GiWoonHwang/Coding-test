/*
공용체는 union 키워드를 사용하여 선언하며, 모든 면에서 구조체와 같다. 하지만 모든 멤버 변수가 하나의 메모리 공간을 공간을 공유한다는 점만이 다르다.
모든 멤버 변수가 같은 메모리를 공유하기 때문에 공용체는 한 번에 하나의 멤버 변수밖에 사용할 수 없다.

공용체는 순서가 규칙적이지 않고, 미리 알 수 없는 다양한 타입의 데이터를 저장할 수 있도록 설계된 타입이다.
이러한 공용체는 크기가 가장 큰 멤버 변수의 크기로 메모리를 할당받는다. 따라서 공용체 배열을 사용하면, 같은 크기로 구성된 배열 요소에 다양한 크기의 데이터를 저장할 수 있다.

열거체
열거체는 새로운 타입을 선언하면서 동시에 그 타입이 가질 수 있는 정수형 상숫값도 같이 명시한다.
이러한 열거체는 이용하면 프로그램의 가독성이 높아지고 변수가 지니는 값에 의미를 부여할 수 있다.
*/

#include <string>
#include <iostream>

using namespace std;

// 공용체는 가장 큰 멤버 변수의 메모리를 할당받는다. 따라서 공용체 배열을 사용하면, 같은 크기로 구성된 배열 요소에
// 다양한 크기의 데이터를 저장할 수 있다.
union ShareDate
{
    unsigned char a;
    unsigned short b; // 2바이트를 차지하는 자료형으로 -32768~32767 범위의 정수를 표현
    unsigned int c;
};

// 열거형을 정의해도 메모리가 할당되지 않고 열거형 변수가 선언이 되어야 메모리가 할당된다. 사용자가 이름 짓는 새로운 데이터 타입인 것이다.
// 프로그램의 가독성을 높이고자 할 때 사용하며 오류 코드를 나타 낼 때 사용하기도 한다.
enum Weather {SUNNY = 0, CLOUD = 10, RAIN = 20, SNOW = 30};

int main(void){
    ShareDate var;
    var.c = 0x12345678;

    // 각자 선언된 데이터 타입으로 출력된다.
    cout << hex;
    cout << var.a << endl; // 5678
    cout << var.b << endl; // 12345678
    cout << var.c << endl;

    int input;
    Weather wt; 

    cout << "오늘의 날씨를 입력해 주세요 :" << endl;
    cout << "(SUNNY=0, CLOUD=10, RAIN=20, SNOW=30)" << endl;

    cin >> input;
    wt = (Weather)input;

    switch (wt){
        case SUNNY:
            cout << "오늘의 날씨는 아주 맑아요!";
            break;
        case CLOUD:
            cout << "오늘의 날씨는 흐리네요!";
            break;
        case RAIN:
            cout << "오늘의 날씨는 비가 주룩주룩 오네요!";
            break;
        case SNOW:
            cout << "오늘의 날씨는 하얀 눈이 내려요!";
            break;
        default:
            cout << "정확한 상숫값을 입력해 주세요!";
            break;
    }
    cout << endl << "열거체 Weather의 각 상숫값은 " << SUNNY << ", " << CLOUD << ", " << RAIN << ", " << SNOW << "입니다.";



    return 0;
}