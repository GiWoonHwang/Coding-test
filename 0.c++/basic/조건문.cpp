/*
c++ 프로그램이 원하는 결과를 얻기 위해서는 프로그램의 순차적인 흐름을 제어해야만 하는 경우가 생긴다.
이때 사용하는 명령문을 제어문이라고 하며, 이러한 제어문에는 조건문, 반복문 등이 있다.

이러한 제어문에 속하는 명령문들은 중괄호로 둘러싸여 있으며, 이러한 중괄호 영역을 블록이라고 합니다.

조건문: 조건문은 주어진 조건식의 결과에 따라 별도의 명령을 수행하도록 제어하는 명령문입니다.
조건문 중에서도 가장 기본이 되는 명령문은 바로 if 문입니다.

대표적인 조건문
1. if문 
2. if/else 문
3. if/else if / else 문
4. switch 문

switch문
스위치문은 if/else문과 마찬가지로 주어진 조건 값의 결과에 따라 다른 명령을 수행하도록 하는 조건문입니다.
이러한 switch문은 if/else 문보다 가독성이 더 좋으며 컴파일러가 최적화를 쉽게 할 수 있어 속도 또한 빠른 편입니다. 하지만 switch 문의 조건 값으로는 int형으로 승격할 수 있는(interger promotion) 
값만이 사용될 수 있습니다.
즉, C++에서는 char, short, int형 변수나 리터럴과 나중에 배우게 될 열거체까지 사용할 수 있습니다.
따라서 if/else 문보다는 사용할 수 있는 상황이 적은 편입니다.

switch (조건 값)
{
    case 값1:
        조건 값이 1일 때 실행하고자 하는 명령문;
        break
    case 값1:
        조건 값이 2일 때 실행하고자 하는 명령문;
        break
    default:
        조건 값이 어떠한 caee 절에도 해당하지 않을 때 실행하고자 하는 명령문
        break
}
*/

#include <iostream>
using namespace std;


/*
각 case 절 및 default 절은 반드시 break 키워드를 포함하고 있어야 합니다.

break 키워드는 조건 값에 해당하는 case 절이나 default 절이 실행된 뒤에 전체 switch 문을 빠져나가게 해줍니다.

만약에 break 키워드가 없다면, 조건에 해당하는 switch 문의 case 절 이후의 모든 case 절이 전부 실행될 것입니다.
*/

int main(){
int num;
switch (num)
{

    case 1:

        cout << "입력하신 수는 1입니다." << endl;

        break;

    case 2:

        cout << "입력하신 수는 2입니다." << endl;

        break;

    case 3:

        cout << "입력하신 수는 3입니다." << endl;

        break;

    case 4:

        cout << "입력하신 수는 4입니다." << endl;

        break;

    case 5:

        cout << "입력하신 수는 5입니다." << endl;

        break;

    default:

        cout << "1부터 5까지의 수만 입력해 주세요!" << endl;

        break;

}
return 1;
}