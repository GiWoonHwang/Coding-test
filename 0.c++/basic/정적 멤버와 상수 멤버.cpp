/*
정적 멤버 변수(static member variable)
C++에서 정적 멤버란 클래스에는 속하지만, 객체 별로 할당되지 않고 클래스의 모든 객체가 공유하는 멤버를 의미합니다.

멤버 변수가 정적(static)으로 선언되면, 해당 클래스의 모든 객체에 대해 하나의 데이터만이 유지 관리됩니다.

 

정적 멤버 변수는 클래스 영역에서 선언되지만, 정의는 파일 영역에서 수행됩니다.

이러한 정적 멤버 변수는 외부 연결(external linkage)을 가지므로, 여러 파일에서 접근할 수 있습니다.

 

정적 멤버 변수에도 클래스 멤버의 접근 제한 규칙이 적용되므로, 클래스의 멤버 함수나 프렌드만이 접근할 수 있습니다.

하지만 정적 멤버 변수를 외부에서도 접근할 수 있게 하고 싶으면, 정적 멤버 변수를 public 영역에 선언하면 됩니다.

 

다음 예제는 모든 Person 객체가 같이 공유하는 person_count_라는 정적 멤버 변수를 선언하는 예제입니다.
*/

#include <string>
using namespace std;

class Person

{

private:

    string name_;

    int age_;

public:

    static int person_count_;            // 정적 멤버 변수의 선언

    Person(const string& name, int age); // 생성자

    ~Person() { person_count_--; }       // 소멸자

    void ShowPersonInfo();

};  


int Person::person_count_ = 0; // 정적 멤버 변수의 정의 및 초기화

/*
정적 멤버 함수(static member function)
C++에서는 클래스의 멤버 함수도 정적(static)으로 선언할 수 있습니다.

이렇게 선언된 정적 멤버 함수는 해당 클래스의 객체를 생성하지 않고도, 클래스 이름만으로 호출할 수 있습니다.

문법
1. 객체이름.멤버함수이름();   // 일반 멤버 함수의 호출

2. 클래스이름.멤버함수이름(); // 정적 멤버 함수의 호출

 

정적 멤버 함수는 정적 멤버 변수를 선언하는 방법과 같이 static 키워드를 사용하여 선언합니다.

 

이러한 정적 멤버 함수는 다음과 같은 특징을 갖습니다.

 

1. 객체를 생성하지 않고 클래스 이름만으로 호출할 수 있습니다.

2. 객체를 생성하지 않으므로, this 포인터를 가지지 않습니다.

3. 특정 객체와 결합하지 않으므로, 정적 멤버 변수밖에 사용할 수 없습니다.
*/

class Person

{

private:

    string name_;

    int age_;

public:

    static int person_count_;            // 정적 멤버 변수의 선언

    static int person_count();           // 정적 멤버 함수의 선언

    Person(const string& name, int age); // 생성자

    ~Person() { person_count_--; }       // 소멸자

    void ShowPersonInfo();

};



int Person::person_count_ = 0; // 정적 멤버 변수의 정의 및 초기화



int Person::person_count()     // 정적 멤버 함수의 정의

{

    return person_count_;

}

/*

*/