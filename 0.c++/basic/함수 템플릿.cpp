/*
일반화 프로그래밍(generic programming)
C++이 가지는 프로그래밍 언어로서의 특징 중 하나로 일반화 프로그래밍(generic programming)을 들 수 있습니다.

일반화 프로그래밍은 데이터를 중시하는 객체 지향 프로그래밍과는 달리 프로그램의 알고리즘에 그 중점을 둡니다.

이러한 일반화 프로그래밍을 지원하는 C++의 대표적인 기능 중 하나가 바로 템플릿(template)입니다.

템플릿(template)
템플릿(template)이란 매개변수의 타입에 따라 함수나 클래스를 생성하는 메커니즘을 의미합니다.

템플릿은 타입이 매개변수에 의해 표현되므로, 매개변수화 타입(parameterized type)이라고도 불립니다.

템플릿을 사용하면 타입마다 별도의 함수나 클래스를 만들지 않고, 여러 타입에서 동작할 수 있는 단 하나의 함수나 클래스를 작성하는 것이 가능합니다.

함수 템플릿(function template)
C++에서 함수 템플릿(function template)이란 함수의 일반화된 선언을 의미합니다.

함수 템플릿을 사용하면 같은 알고리즘을 기반으로 하면서, 서로 다른 타입에서 동작하는 함수를 한 번에 정의할 수 있습니다.

임의의 타입으로 작성된 함수에 특정 타입을 매개변수로 전달하면, C++ 컴파일러는 해당 타입에 맞는 함수를 생성해 줍니다.

 

C++에서 함수 템플릿은 다음과 같은 문법으로 정의합니다

template <typename 타입이름>

함수의 원형

{

    // 함수의 본체

}

C++98에서 추가된 typename 키워드 이전에는 class 키워드를 사용했습니다.

따라서 C++ 컴파일러는 템플릿 정의 내의 typename 키워드와 class 키워드를 같은 것으로 간주합니다.

 

위에서 정의된 타입 이름은 함수의 원형과 본체에서 임의의 타입으로 사용할 수 있습니다.

이렇게 정의된 함수 템플릿을 호출할 때 매개변수로 int형을 전달하면, 함수의 원형과 본체에서 정의된 타입 이름은 모두 int형으로 바뀌게 됩니다.

 

다음 예제는 여러 타입의 변수의 값을 서로 바꿔주는 Swap() 함수를 함수 템플릿으로 작성한 예제입니다.
*/

#include <iostream>
using namespace std;

template <typename T>

void Swap(T& a, T& b);

 

int main(void)

{

    int c = 2, d = 3;

    cout << "c : " << c << ", d : " << d << endl;

    Swap(c, d);

    cout << "c : " << c << ", d : " << d << endl;

 

    string e = "hong", f = "kim";

    cout << "e : " << e << ", f : " << f << endl;

    Swap(e, f);

    cout << "e : " << e << ", f : " << f << endl;

    return 0;

} 

template <typename T>

void Swap(T& a, T& b)

{

    T temp;

    temp = a;

    a = b;

    b = temp;

}

/*
함수 템플릿의 인스턴스화
함수 템플릿이 각각의 타입에 대해 처음으로 호출될 때, C++ 컴파일러는 해당 타입의 인스턴스를 생성합니다.

이렇게 생성된 인스턴스는 해당 타입에 대해 특수화된 템플릿 함수입니다.

이 인스턴스는 함수 템플릿에 해당 타입이 사용될 때마다 호출됩니다.

명시적 특수화(explicit specialization)
C++의 함수 템플릿은 특정 타입에 대한 명시적 특수화를 제공하여, 해당 타입에 대해 특별한 동작을 정의할 수 있게 해줍니다.

컴파일러는 호출된 함수에 정확히 대응하는 특수화된 정의를 발견하면, 더는 템플릿을 찾지 않고 해당 정의를 사용합니다.

 

앞서 정의된 함수 템플릿 Swap의 double형에 대한 명시적 특수화는 다음과 같습니다.

함수 템플릿 원형
template <typename T>

void Swap(T& a, T& b);

template <typename T> void Swap(T& a, T& b);

 

double형을 위한 명시적 특수화
template <> void Swap<double>(double&, double&) { ... };

 

다음 예제는 Swap() 함수 템플릿에서 double형에 대한 동작만을 변경하기 위해 명시적 특수화를 사용한 예제입니다.

예제
template <> void Swap<double>(double&, double&)

{

    // double형은 값을 서로 바꾸지 않음.

}

코딩연습 ▶

실행 결과
c : 2, d : 3

c : 3, d : 2

e : 1.234, f : 4.321

e : 1.234, f : 4.321

 

위의 예제에서 Swap() 함수는 double형에 대해서는 더는 값을 서로 바꾸지 않게 됩니다.
*/