/*
C++에서 클래스 템플릿(class template)이란 클래스의 일반화된 선언을 의미합니다.

앞서 살펴본 함수 템플릿과 동작은 같으며, 그 대상이 함수가 아닌 클래스라는 점만 다릅니다.

 

클래스 템플릿을 사용하면, 타입에 따라 다르게 동작하는 클래스 집합을 만들 수 있습니다.

즉, 클래스 템플릿에 전달되는 템플릿 인수(template argument)에 따라 별도의 클래스를 만들 수 있게 됩니다.

이러한 템플릿 인수는 타입이거나 명시된 타입의 상숫값일 수 있습니다.

 

C++에서 클래스 템플릿은 다음과 같은 문법으로 정의할 수 있습니다.

문법
template <typename 타입이름>

class 클래스템플릿이름

{

    // 클래스 멤버의 선언

}

 

함수 템플릿과 마찬가지로 템플릿 정의 내에서 typename 키워드 대신에 class 키워드를 사용할 수 있습니다.

위에서 정의된 타입 이름은 클래스의 선언에서 임의의 타입으로 사용할 수 있습니다.
*/

#include <string>
#include <iostream>
using namespace std;

template <typename T>

class Data

{

private:

    T data_;

public:

    Data(T dt);

    data(T dt);

    T get_data();

};

/*
C++에서는 클래스나 클래스 템플릿 내에 또 다른 템플릿을 중첩하여 정의할 수 있으며, 이러한 템플릿을 멤버 템플릿(member template)이라고 합니다.

멤버 템플릿 중에서도 클래스 템플릿을 중첩 클래스 템플릿(nested class template)이라고 합니다.


이러한 중첩 클래스 템플릿은 바깥쪽 클래스의 범위 내에서 클래스 템플릿으로 선언되며, 정의는 바깥쪽 클래스의 범위 내에서뿐만 아니라 범위 밖에서도 가능합니다.
*/

emplate <typename T>

class X

{

    template <typename U>

    class Y

    {


    }

  

    }

 

int main(void)

{

  

}

 

template <typename T>

template <typename U>


{

  

}

/*
C++에서 클래스 템플릿은 다음과 같은 특징을 가집니다.

 

1. 하나 이상의 템플릿 인수를 가지는 클래스 템플릿을 선언할 수 있습니다.

예제
template <typename T, int i> // 두 개의 템플릿 인수를 가지는 클래스 템플릿을 선언함.

class X

{ ... }

 

2. 클래스 템플릿에 디폴트 템플릿 인수를 명시할 수 있습니다.

예제
template <typename T = int, int i> // 디폴트 템플릿 인수의 타입을 int형으로 명시함.

class X

{ ... }

 

3. 클래스 템플릿를 기초 클래스로 하여 상속할 수 있습니다.

예제
template <typename Type>

class Y : public X <Type> // 클래스 템플릿 X를 상속받음.

{ ... }

명시적 특수화(explicit specialization)
클래스 템플릿은 함수 템플릿과 마찬가지로 특정 타입이나 값의 템플릿 인수에 대하여 특수화할 수 있습니다.

이렇게 특수화를 명시하면, 해당 타입에 대한 특별한 동작을 정의할 수 있습니다.

컴파일러는 전달된 인수에 정확히 대응하는 특수화된 정의를 발견하면, 더는 다른 템플릿을 찾지 않고 해당 정의를 사용합니다.

 

앞서 정의된 클래스 템플릿 X의 double형에 대한 명시적 특수화는 다음과 같습니다.

double 타입을 위한 명시적 특수화
template <> class X<double> { ... };

 

다음 예제는 Data 클래스 템플릿에서 double형에 대한 동작만을 변경하기 위해 명시적 특수화를 사용한 예제입니다.

예제
template <> class Data<double> // double형에 대한 명시적 특수화

{

private:

    double data_;

public:

    Data(double dt) { data_ = dt; } // 생성자

    data(double dt) { data_ = dt; }

    double get_data()

    {

        cout << "double형 데이터를 출력합니다!" << endl;

        return data_;

    }

};

코딩연습 ▶

실행 결과
str_data : C++ 수업

double형 데이터를 출력합니다.

double_data : 3.14

부분 특수화(partial specialization)
만약 템플릿 인수가 두 개 이상이고, 그중 일부에 대해서만 특수화를 해야 할 때는 부분 특수화(partial specialization)를 사용할 수 있습니다.

부분 특수화 방법은 먼저 template 키워드 다음에 나오는 꺾쇠괄호(<>)에 특수화하지 않는 타입의 템플릿 인수를 명시합니다.

그리고서 다음에 나오는 꺾쇠괄호(<>)에 특수화하는 타입을 명시하면 됩니다.

 

예제
template <typename T1, typename T2>

class X

{ ... };

 

위의 예제에서 선언된 클래스 템플릿 X를 double형에 대해 부분 특수화를 하면 다음과 같습니다.

예제
template <typename T1> class X<T1, double> { ... };

 

위의 예제에 T1 타입까지 특수화하게 되면, 앞서 살펴본 완전한 명시적 특수화가 됩니다.

예제
template <> class X<double, double> { ... };

템플릿을 위한 새로운 이름
C++11부터는 typedef 키워드를 이용하여 템플릿 특수화를 위한 새로운 이름을 선언할 수 있습니다.

예제
typedef X<double, 3.14> DoubleX;

DoubleX double_x; // double_x는 X<double, 3.14> 타입임.
*/