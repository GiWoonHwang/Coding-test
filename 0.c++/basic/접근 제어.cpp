/*
cpp 에서 구조체의 모든 멤버는 외부에서 언제나 접근할 수 있다.
하지만 클래스는 개체 지향 프로그래밍의 기본 규칙 중 하나인 정보 은닉에 대해서도 생각해야 한다.
정보 은닉이란 사용자가 굳이 알 필요가 없는 정보는 사용자로부터 숨겨야 한다는 개념이다.
그렇게 함으로써 언제나 최소한의 정보만으로 프로그램을 손쉽게 사용할 수 있게 된다.

public
private
protected

publec 접근 제어 지시자를 사용하여 선언된 클래스 멤버는 외부로 공개되며, 해당 객체를 사용하는 프로그램 어디에서나 직접 접근할 수 있다.
따라서 public 멤버 함수는 해당 객체의 private 멤버와 프로그램 사이의 인터페이스 역할을 하게 된다.
프로그램은 이러한 public 멤버 함수를 통해 해당 객체의 private 멤버에도 접근할 수 있다.

*/

#include <string>
#include <iostream>

using namespace std;

// class Book
// {
//     public:
//         int total_page_; // 책의 제목
//         string title_; // 총 페이지
//         double percent_; // 해당 책을 읽은 정도
//         void Move(int page); // 헌재 페이지를 전달받은 페이지로 이동시킴
//         void Open(); // 현재 페이지로 책을 엶.
//         void Read(); // 현재 페이지에서 다음 페이지로 넘어감
// };

/*
private 접근 제어 지시자
private 접근 제어 지시자를 사용하여 선언된 클래스 멤버는 외부에 공개되지 않으며, 외부에서 직접 접근할 수도 없다.
프로그램은 private 멤버에 직접 접근할 수 없으며, 해당 객체의 public 멤버 함수를 통해서만 접근할 수 있다.
클래스의 기본 접근 제어 권한은 private로 설정되어 있으므로, 클래스 선언시 private 접근 제어 지시자는 생략할 수 있다.
일반적으로 private 멤버는 public 인터페이스를 직접 구성하지 않는 클래스의 세부적인 동작을 구현하는데 사용된다.
*/

class Book{
    private:
        int current_page_;
        void set_percent();
    public:
        string title_;
        int total_page_;
        double percent_;
        void Move(int page);
        void Open();
        void Read();

};


/*
protected 멤버는 파생 클래스에 대해서는 public 멤버처럼 취급되며, 외부에서는 private 멤버처럼 취급됩니다.

 

protected 멤버에 접근할 수 있는 영역은 다음과 같습니다.

 

1. 이 멤버를 선언한 클래스의 멤버 함수

2. 이 멤버를 선언한 클래스의 프렌드

3. 이 멤버를 선언한 클래스에서 public 또는 protected 접근 제어로 파생된 클래스

 

다음 그림은 클래스의 protected 멤버에 접근할 수 있는 영역을 나타냅니다.
*/