/*
cpp에서 클래스란 구조체의 사우이 호환으로 이해할 수 있다.
cpp의 구조체는 멤버로 함수를 포함할 수 있기에, c언어의 구조체보다 좀 더 확장된 의미를 가진다.
cpp에서 이러한 구조체와 클래스의 차이는 기본 접근 제어의 차이일 뿐, 나머지는 거의 같다.
cpp에서는 이러한 클래스를 가지고 객체 지향 프로그래밍을 작성할 수 있다.

객체 지향 프로그래밍
객체 지향 프로그래밍에서는 모든 데이터를 객체로 취급하며, 객체가 바로 프로그래밍의 중심이 된다.
객체란 간단히 이야기 하면 실생활에서 우리가 인식할 수 있는 모든 사물로 이해할 수 있다.
이러한 객체의 상태와 행동을 구체화하는 형태의 프로그래밍이 바로 객체 지향 프로그래밍이다.
또한, 이와 같은 객체를 만들어 내기 위한 틀과 같은 개념이 바로 클래스이다.

객체 지향 프로그래밍의 특징
객체 지향 프로그래밍이 가지는 특징은 다음과 같습니다. 

1. 추상화(abstraction)

2. 캡슐화(encapsulation)

3. 정보 은닉(data hiding)

4. 상속성(inheritance)

5. 다형성(polymorphism)

객체의 예
객체(object)
고양이

멤버 변수(member variable)
cat.name = "나비"
cat.family = "코리안 숏 헤어"
cat.age_ = 1
cat.weight = 0.1

멤버 함수
cat.mew()
cat.eat()
cat.sleep()

고양이 객체는 모두 위와 같은 멤버 변수와 멤버 함수를 가지지만, 멤버 변수의 값은 인스턴스마다 전부 다를 것 이다.

인스턴스
cpp에서 클래스는 구조체와 마찬가지로 사용자가 정의할 수 있는 일종의 타입이다. 따라서 클래스를 사용하기 위해서는 우선 해당 클래스 타입의 객체를 선언해야 한다.
이렇게 선언된 해당 클래스 타입의 객체를 인스턴스라고 하며, 메모리에 대입된 객체를 의미한다.
하나의 클래스에서 여러 개의 인스턴스를 생성할 수 있습니다.

이러한 인스턴스는 독립된 메모리 공간에 저장된 자신만의 멤버 변수를 가지지만, 멤버 함수는 모든 인스턴스가 공유합니다.
*/