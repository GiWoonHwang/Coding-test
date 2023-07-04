/*
디폴트 생성자는 객체가 생성될 때 사용자가 초깃값을 명시하지 않으면, 컴파일러가 자동으로 제공하는 생성자입니다.

디폴트 생성자는 사용자로부터 인수를 전달받지 않으므로, 매개변수를 가지지 않습니다.

매개변수를 가지지 않으므로 대부분의 디폴트 생성자가 0이나 NULL, 빈 문자열 등으로 초기화를 진행합니다.

 

컴파일러가 제공하는 디폴트 생성자의 원형은 다음과 같습니다.

원형
Book::Book() { }

 

디폴트 생성자는 클래스에 생성자가 단 하나도 정의되지 않았을 때만, 컴파일러에 의해 자동으로 제공됩니다.

만약 사용자가 생성자를 단 하나라도 정의했다면, 위와 같은 객체의 선언은 오류를 발생시킬 것입니다.

따라서 위와 같이 초깃값을 명시하지 않고 객체를 생성하고 싶다면, 사용자가 직접 디폴트 생성자를 정의해야 합니다.

디폴트 생성자의 정의
C++에서 사용자가 직접 디폴트 생성자를 정의하는 방법은 다음과 같습니다. 

1. 함수 오버로딩을 이용한 방법

2. 디폴트 인수를 이용한 방법
*/
#include <string>
#include <iostream>
using namespace std;

// int main(void)

// {

//     Book web_book; // 디폴트 생성자의 암시적 호출

//     // 생성자가 호출되어 멤버 변수인 percent_가 초기화되었는지를 확인함.

//     cout << web_book.percent_ << endl;

//     return 0;

// }

 

// Book::Book(const string& title, int total_page)

// {

//     title_ = title;

//     total_page_ = total_page;

//     current_page_ = 0;

//     set_percent();

// }

 

// void Book::set_percent()

// {

//     percent_ = (double) current_page_ / total_page_ * 100;

// }

// class Book

// {

// public:

//     string title_;       // 책의 제목

//     int total_page_;     // 총 페이지

//     double percent_;     // 해당 책을 읽은 정도

//     void Move(int page); // 현재 페이지를 전달받은 페이지로 이동시킴.

//     void Open();         // 현재 페이지로 책을 엶.

//     void Read();         // 현재 페이지에서 다음 페이지로 넘어감.

// };