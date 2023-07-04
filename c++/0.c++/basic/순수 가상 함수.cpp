/*
순수 가상 함수(pure virtual function)
C++에서 가상 함수(virtual function)는 파생 클래스에서 재정의할 것으로 기대하는 멤버 함수를 의미합니다.

따라서 가상 함수는 반드시 재정의해야만 하는 함수가 아닌, 재정의가 가능한 함수를 가리킵니다.

 

이와는 달리 순수 가상 함수(pure virtual function)란 파생 클래스에서 반드시 재정의해야 하는 멤버 함수를 의미합니다.

이러한 순수 가상 함수는 일반적으로 함수의 동작을 정의하는 본체를 가지고 있지 않습니다.

따라서 파생 클래스에서 재정의하지 않으면 사용할 수 없습니다.

 

C++에서 순수 가상 함수는 다음과 같은 문법으로 선언합니다.
virtual 멤버함수의원형=0;


추상 클래스(abstract class)
C++에서는 하나 이상의 순수 가상 함수를 포함하는 클래스를 추상 클래스(abstract class)라고 합니다.

이러한 추상 클래스는 객체 지향 프로그래밍에서 중요한 특징인 다형성을 가진 함수의 집합을 정의할 수 있게 해줍니다.

즉, 반드시 사용되어야 하는 멤버 함수를 추상 클래스에 순수 가상 함수로 선언해 놓으면, 이 클래스로부터 파생된 모든 클래스에서는 이 가상 함수를 반드시 재정의해야 합니다.

 

추상 클래스는 동작이 정의되지 않은 순수 가상 함수를 포함하고 있으므로, 인스턴스를 생성할 수 없습니다.

따라서 추상 클래스는 먼저 상속을 통해 파생 클래스를 만들고, 만든 파생 클래스에서 순수 가상 함수를 모두 오버라이딩하고 나서야 비로소 파생 클래스의 인스턴스를 생성할 수 있게 됩니다.

하지만 추상 클래스 타입의 포인터와 참조는 바로 사용할 수 있습니다.
*/

#include <string>
#include <iostream>

using namespace std;

class Animal

{

public:

    virtual ~Animal() {}  // 가상 소멸자의 선언

    virtual void Cry()=0; // 순수 가상 함수의 선언

};

 

class Dog : public Animal

{

public:

    virtual void Cry() { cout << "멍멍!!" << endl; }

};

 

class Cat : public Animal

{

public:

    virtual void Cry() { cout << "야옹야옹!!" << endl; }

};

 

int main(void)

{

    Dog my_dog;

    my_dog.Cry();

    Cat my_cat;

    my_cat.Cry();

    return 0;

}