/*
C++ 프로그램에서 new 키워드를 사용하여 동적으로 할당받은 메모리는, 반드시 delete 키워드를 사용하여 해제해야 합니다.

C++에서는 메모리 누수(memory leak)로부터 프로그램의 안전성을 보장하기 위해 스마트 포인터를 제공하고 있습니다.

스마트 포인터(smart pointer)란 포인터처럼 동작하는 클래스 템플릿으로, 사용이 끝난 메모리를 자동으로 해제해 줍니다.

스마트 포인터의 동작
보통 new 키워드를 사용해 기본 포인터(raw pointer)가 실제 메모리를 가리키도록 초기화한 후에, 기본 포인터를 스마트 포인터에 대입하여 사용합니다.

이렇게 정의된 스마트 포인터의 수명이 다하면, 소멸자는 delete 키워드를 사용하여 할당된 메모리를 자동으로 해제합니다.

따라서 new 키워드가 반환하는 주소값을 스마트 포인터에 대입하면, 따로 메모리를 해제할 필요가 없어집니다.

스마트 포인터의 종류
C++11 이전에는 auto_ptr이라는 스마트 포인터를 사용하여 이 작업을 수행하였습니다.

하지만 C++11부터는 다음과 같은 새로운 스마트 포인터를 제공하고 있습니다.

 

1. unique_ptr

2. shared_ptr

3. weak_ptr

 

스마트 포인터는 memory 헤더 파일에 정의되어 있습니다.

 

auto_ptr은 C++11 표준부터 삭제되었습니다.
unique_ptr
unique_ptr은 하나의 스마트 포인터만이 특정 객체를 소유할 수 있도록, 객체에 소유권 개념을 도입한 스마트 포인터입니다.

 

이 스마트 포인터는 해당 객체의 소유권을 가지고 있을 때만, 소멸자가 해당 객체를 삭제할 수 있습니다.


unique_ptr 인스턴스는 move() 멤버 함수를 통해 소유권을 이전할 수는 있지만, 복사할 수는 없습니다.


소유권이 이전되면, 이전 unique_ptr 인스턴스는 더는 해당 객체를 소유하지 않게 재설정됩니다.

 

예제
unique_ptr<int> ptr01(new int(5)); // int형 unique_ptr인 ptr01을 선언하고 초기화함.

auto ptr02 = move(ptr01);          // ptr01에서 ptr02로 소유권을 이전함.

// unique_ptr<int> ptr03 = ptr01;  // 대입 연산자를 이용한 복사는 오류를 발생시킴. 

ptr02.reset();                     // ptr02가 가리키고 있는 메모리 영역을 삭제함.

ptr01.reset();                     // ptr01가 가리키고 있는 메모리 영역을 삭제함.

 

위의 예제에서 주석 처리된 구문처럼 스마트 포인터에 대한 대입 연산자를 이용한 복사는 오류를 발생시킬 것입니다.

 

보통의 C++ 객체에 대해 스마트 포인터가 필요한 상황에서는 주로 unique_ptr을 사용하면 됩니다.

 

C++14 이후부터 제공되는 make_unique() 함수를 사용하면 unique_ptr 인스턴스를 안전하게 생성할 수 있습니다.

make_unique() 함수는 전달받은 인수를 사용해 지정된 타입의 객체를 생성하고, 생성된 객체를 가리키는 unique_ptr을 반환합니다.

이 함수를 사용하면, 예외 발생에 대해 안전하게 대처할 수 있습니다.

 

다음 예제는 Person 객체를 가리키는 hong이라는 unique_ptr를 make_unique() 함수를 통해 생성하는 예제입니다.

예제
#include <iostream>

#include <memory>

using namespace std;

 

class Person

{

private:

    string name_;

    int age_;

public:

    Person(const string& name, int age); // 기초 클래스 생성자의 선언

    ~Person() { cout << "소멸자가 호출되었습니다." << endl; }

    void ShowPersonInfo();

};

 

int main(void)

{

    unique_ptr<Person> hong = make_unique<Person>("길동", 29);

    hong->ShowPersonInfo();

    return 0;

}

 

Person::Person(const string& name, int age) // 기초 클래스 생성자의 정의

{

    name_ = name;

    age_ = age;

    cout << "생성자가 호출되었습니다." << endl;

}

 

void Person::ShowPersonInfo() { cout << name_ << "의 나이는 " << age_ << "살입니다." << endl; }

실행 결과
생성자가 호출되었습니다.

길동의 나이는 29살입니다.

소멸자가 호출되었습니다.

 

위의 예제에서 Person 객체를 가리키는 unique_ptr 인스턴스인 hong은 일반 포인터와는 달리 사용이 끝난 후에 delete 키워드를 사용하여 메모리를 해제할 필요가 없습니다.

 

make_unique() 함수를 사용하기 위해서는 여러분의 C++ 컴파일러가 C++14를 지원해야 합니다.
shared_ptr
shared_ptr은 하나의 특정 객체를 참조하는 스마트 포인터가 총 몇 개인지를 참조하는 스마트 포인터입니다.

이렇게 참조하고 있는 스마트 포인터의 개수를 참조 횟수(reference count)라고 합니다.


참조 횟수는 특정 객체에 새로운 shared_ptr이 추가될 때마다 1씩 증가하며, 수명이 다할 때마다 1씩 감소합니다.


따라서 마지막 shared_ptr의 수명이 다하여, 참조 횟수가 0이 되면 delete 키워드를 사용하여 메모리를 자동으로 해제합니다.

 

예제
shared_ptr<int> ptr01(new int(5)); // int형 shared_ptr인 ptr01을 선언하고 초기화함.

cout << ptr01.use_count() << endl; // 1

auto ptr02(ptr01);                 // 복사 생성자를 이용한 초기화

cout << ptr01.use_count() << endl; // 2

auto ptr03 = ptr01;                // 대입을 통한 초기화

cout << ptr01.use_count() << endl; // 3  

 

위의 예제에서 사용된 use_count() 멤버 함수는 shared_ptr 객체가 현재 가리키고 있는 리소스를 참조 중인 소유자의 수를 반환해 줍니다.

 

위와 같은 방법 이외에도 make_shared() 함수를 사용하면 shared_ptr 인스턴스를 안전하게 생성할 수 있습니다.

make_shared() 함수는 전달받은 인수를 사용해 지정된 타입의 객체를 생성하고, 생성된 객체를 가리키는 shared_ptr을 반환합니다.

이 함수를 사용하면, 예외 발생에 대해 안전하게 대처할 수 있습니다.

 

다음 예제는 Person 객체를 가리키는 hong이라는 shared_ptr를 make_shared() 함수를 통해 생성하는 예제입니다.

예제
shared_ptr<Person> hong = make_shared<Person>("길동", 29);

cout << "현재 소유자 수 : " << hong.use_count() << endl; // 1

auto han = hong;

cout << "현재 소유자 수 : " << hong.use_count() << endl; // 2

han.reset(); // shared_ptr인 han을 해제함.

cout << "현재 소유자 수 : " << hong.use_count() << endl; // 1



실행 결과
생성자가 호출되었습니다.

현재 소유자 수 : 1

현재 소유자 수 : 2

현재 소유자 수 : 1

소멸자가 호출되었습니다.

weak_ptr
weak_ptr은 하나 이상의 shared_ptr 인스턴스가 소유하는 객체에 대한 접근을 제공하지만, 소유자의 수에는 포함되지 않는 스마트 포인터입니다.

 

shared_ptr은 참조 횟수(reference count)를 기반으로 동작하는 스마트 포인터입니다.

만약 서로가 상대방을 가리키는 shared_ptr를 가지고 있다면, 참조 횟수는 절대 0이 되지 않으므로 메모리는 영원히 해제되지 않습니다.

이렇게 서로가 상대방을 참조하고 있는 상황을 순환 참조(circular reference)라고 합니다.

weak_ptr은 바로 이러한 shared_ptr 인스턴스 사이의 순환 참조를 제거하기 위해서 사용됩니다.


*/