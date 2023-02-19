/*
객체 지향 프로그래밍의 특징 중 하나인 추상화를 사용자 정의 타입으로 구현한 것.
cpp에서 이러한 클래스를 선언하는 방법은 구조체를 선언하는 방법과 거의 같다.
구조체는 struct 키워드를 사용하지만, 클래스는 class 키워드와 접근 제어 지시자를 함께 사용한다.

class 클래스이름
{

접근제어지시자1:

    멤버변수1의타입 멤버변수1의이름;

    멤버변수2의타입 멤버변수2의이름;

    ...

    멤버함수1의 원형

    멤버함수2의 원형

    ...

};

접근 제어 지시자는 객체 지향 프로그래밍의 특징 중 하나인 정보 은닉을 위한 키워드이다. public 영역은 모든 객체에서 접근할 수 있지만, private 영역은 해당 객체 내의 멤버 변수나 멤버 함수만이 접근할 수 있다.
클래스에서 멤버 함수를 정의하는 방법은 일반 함수의 정의와 크게 다르지 않다. cpp에서는 멤버 함수를 클래스의 선언 안이나 밖에서 모두 정의할 수 있도록 허용한다.
클래스의 선언 밖에서 멤버 함수를 정의할 때에는 범위 지정 연산자(::)를 사용하여 해당 함수가 어느 클래스에 속하는지를 명시해야 한다.

클래스 선언 밖에서 Book 클래스의 Move() 멤버 함수를 정의하는 예제.
void Book::Move(int page) { current_page_ = page; }

이처럼 하나의 클래스에서 생성된 인스턴스는 각각 독립된 메모리 공간에 저장된 자신만의 멤버 변수를 가지지만, 멤버 함수는 모든 인스턴스가 공유하게 됩니다.
*/