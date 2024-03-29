/*
함수 오버로딩이란 같은 일을 처리하느 함수를 매배견수의 형식을 조금씩 달리하여, 하나의 이름으로 작성할 수 있게 해주는 것
cpp는 이러한 오버로딩의 개념을 연산자까지 확대하여, 하나의 연산자를 여러 의미로 사용할 수 있게 해준다.

operator 오버로딩할연산자(매개변수목록)

Position Position::operator-(const Position& other)

{

    return Position((x_ + other.x_)/2, (y_ + other.y_)/2);

}

코딩연습 ▶

실행 결과
두 지점의 중간 지점의 좌표는 x좌표가 -5.55이고, y좌표가 10.15입니다.

 

위의 예제에서는 뺄셈 연산자(-)를 두 Position 객체 사이의 중간 좌표를 구하는 연산으로 오버로딩하여 사용하고 있습니다.

만약 이러한 연산자 오버로딩을 하지 않으면 C++ 컴파일러는 두 Position 객체의 뺄셈 연산은 지원하지 않는다며 오류를 발생시킬 것입니다.

연산자 함수의 정의 방법
C++에서 연산자 함수를 정의하는 방법은 다음과 같이 두 가지 방법이 있습니다.

 

1. 클래스의 멤버 함수로 정의하는 방법

2. 전역 함수로 정의하는 방법

 

이 두 방법의 차이는 인수의 개수뿐만 아니라 private 멤버에 대한 접근 여부도 있습니다.

연산자 함수를 전역 함수로 정의해야 할 경우, private 멤버에 대한 접근을 위해 C++에서 제공하는 프렌드 함수를 사용할 수 있습니다.

 

다음 예제는 앞선 뺄셈 연산자의 오버로딩 예제를 전역 함수로 정의한 예제입니다.

예제
Position operator-(const Position& pos1, const Position& pos2)

{

    return Position((pos1.x_ + pos2.x_)/2, (pos1.y_ + pos2.y_)/2);

}  

코딩연습 ▶

실행 결과
두 지점의 중간 지점의 좌표는 x좌표가 -5.55이고, y좌표가 10.15입니다.

 

위의 예제에서는 뺄셈 연산자(-)를 전역 연산자 함수를 사용하여 오버로딩하고 있습니다.

하지만 전역 함수는 private 멤버인 x_와 y_에 접근하지 못하므로, friend 키워드를 사용하여 프렌드 함수로 선언하고 있습니다.

 

프렌드 함수에 대한 더 자세한 사항은 C++ 프렌드 수업에서 확인할 수 있습니다.

*/

