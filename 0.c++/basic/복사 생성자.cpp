/*
얕은 복사와 깊은 복사
int x = 10;
int y = x;

마찬가지로 새롭게 생성하는 객체에 또 다른 객체의 값을 대입하기 위해서도 대입 연산자(=)를 사용할 수 있습니다.

예제
Book web_book("HTML과 CSS", 350);

Book html_book = web_book;

 

하지만 대입 연산자를 이용한 객체의 대입은 얕은 복사(shallow copy)로 수행됩니다.

얕은 복사(shallow copy)란 값을 복사하는 것이 아닌, 값을 가리키는 포인터를 복사하는 것입니다.

따라서 변수의 생성에서 대입 연산자를 이용한 값의 복사는 문제가 되지 않지만, 객체에서는 문제가 발생할 수도 있습니다.

특히 객체의 멤버가 메모리 공간의 힙(heap) 영역을 참조할 경우에는 문제가 발생합니다.

복사 생성자
cpp에서 복사 생성자란 자신과 같은 클래스 타입의 다른 객체에 대한 참조를 인수로 전달받아, 그 참조를 가지고 자신을 초기화 하는 방법이다.
복사 생성자는 새롭게 생성되는 객체가 원본 객체와 같으면서도, 완전한 독립성을 가지게 해줍니다.
왜냐하면, 복사 생성자를 이용한 대입은 깊은 복사를 통한 값의 복사이기 때문이다.

Book 클래스의 복사 생성자의 원형은 다음과 같다.
Book(const Book&);

복사 생성자는 다음과 같은 상황에서 주로 사용된다.
1. 객체가 함수에 인수로 전달될 때
2. 함수가 객체를 반환값으로 반환할 때
3. 새로운 객체를 같은 클래스 타입의 기존 객체와 똑같이 초기화 할 때
*/

// Book::Book(const Book& origin) // 복사 생성자의 선언

// {

//     title_ = origin.title_;

//     total_page_ = origin.total_page_;

//     current_page_ = origin.current_page_;

//     percent_ = origin.percent_;

// }

// int main(void)

// {

//     Book web_book("HTML과 CSS", 350);

//     Book html_book(web_book);

//     ...

// }

