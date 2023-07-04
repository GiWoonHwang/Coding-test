/*
디폴트 인수가 인수의 개수를 달리하여 같은 함수를 호출하는 것이라면, 함수 오버로딩은 같은 이름의 함수를 중복하여 정의하는것을 의마한다.
cpp에서 새롭게 추가된 함수 오버로딩은 여러 함수를 하나의 이름으로 연결해준다. 즉 함수 오버로딩이란 같은 일을 처리하는 함수를 매개변수의 형식을 조금씩 달리하여 하나의 이름으로 작성할 수 있게 해주는 것.
이와 같은 함수 오버로딩은 객체지향 프로그래밍 특징 중 다형성의 구현이다.

함수 시그니처
함수 오버로딩의 핵심은 함수 시그니처에 있다. 함수 시그니처란 함수의 원형에 명시되는 매개변수 리스트를 가리킨다.
만약 두 함수가 매개변수의 개수와 그 타입이 모두 같다면, 이 두 함수의 시그니천느 같다고 할 수 있다.
즉, 함수의 오버로딩은 서로 다른 시그니처를 갖는 여러 함수를 같은 이름으로 정의하는 것이라고 할 수 있다.
*/

/*
1. void Display(const char* str, int n);             // 문자열 str을 n번 출력함.

2. void Display(const char* str1, const char* str2); // 문자열 str1과 str2를 연달아 출력함.

3. void Display(int x, int y);                       // x * y를 출력함.

4. void Display(double x, double y);                 // x / y를 출력함.


1. Display("C++", 3);              // 1번 Display() 함수 호출 -> "C++C++C++"

2. Display("C++", " Programming"); // 2번 Display() 함수 호출 -> "C++ Programming"

3. Display(3, 4);                  // 3번 Display() 함수 호출 -> 12

4. Display(4.2, 2.1);              // 4번 Display() 함수 호출 -> 2

5. Display(4.2, 3);                // 3번과 4번 모두 호출 가능 -> 컴파일 오류가 발생함. cpp은 모호한 호출을 허용하지 않는다.

*/

void Shift(int, int);

void Shift(int, int, int);

void Shift(int, int, int, int);

 

int main(void)

{

    Shift(1, 2);

    Shift(1, 2, 3);

    Shift(1, 2, 3, 4);

    return 0;

}
// 위의 예제처럼 함수의 오버로딩은 매개변수의 타입뿐만 아니라 매개변수의 개수를 달리해도 작성할 수 있습니다.
