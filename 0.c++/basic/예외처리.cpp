/*
예외(exception)란?
예외(exception)란 컴퓨터 시스템이 동작하는 도중에 예상하지 못한 오류가 발생하여, 실행되고 있던 프로그램이 중지되는 것을 의미합니다.

예외 처리(exception handling)는 이러한 예외 상황을 처리할 수 있도록 코드의 흐름을 바꾸는 행위를 의미합니다.

C++은 언어 차원에서 예외 처리 문법을 제공하여, 예외 처리하는 방식을 확장하고 관리하기 쉽도록 해줍니다.

try, throw, catch 문
C++에서는 예외 처리의 구현을 위해서 try, throw, catch 문을 제공합니다.

 

1. try 문 : 예외가 발생할 가능성이 있는 코드 블록

2. throw 문 : try 문에서 발생한 오류에 대한 정보를 전달

3. catch 절 : 발생한 예외에 대해 예외 핸들러가 처리할 내용을 담은 코드 블록

 

try 문으로 예외를 처리하기 위해서는 try 문 다음에 반드시 하나 이상의 catch 절을 구현해야 합니다.

또한, 각 catch 절은 자신이 처리할 수 있는 예외 타입을 지정할 수 있습니다.

이때 특정 예외 타입 대신에 줄임표(...)를 사용하면, 해당 catch 절은 모든 타입의 예외를 처리하게 됩니다.

하지만 이러한 줄임표를 사용한 catch 절의 위치는 언제나 catch 절 중 맨 마지막에 위치해야 합니다.

*/

#include <iostream>

using namespace std;

 

int IncreaseNumber(int n)

{

    if (n < 0)

        throw n;

    else if (n == 0)

        throw "0은 입력할 수 없습니다.";

    return ++n;

}

 

int main(void)

{

    int num;

 

    cout << "양의 정수를 하나 입력해주세요 : ";

    while (cin >> num)

    {

        try

        {

            cout << "입력한 정수에서 1을 증가시킨 값 : " << IncreaseNumber(num) << endl;

        }

        catch (int input)

        {

            cout << input << "은 양의 정수가 아닙니다." << endl;

            cout << "양의 정수를 다시 입력해주세요 : ";

            continue;

        }

        catch(const char* st)

        {

            cout << st << endl;

            cout << "양의 정수를 다시 입력해주세요 : ";

            continue;

        }

        break;

    }

    return 0;

}