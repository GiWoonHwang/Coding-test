/*
클래스를 가지고 객체를 생성하면, 해당 객체는 메모리에 즉 생성됩니다. 하지만 이 객체는 모든 멤버 변수를 초기화 하기전에 전에는 사용할 수 없다.

객체의 멤버 변수는 사용자나 프로그램이 일반적인 초기화 방식으로 초기화 할 수 없다. 그 이유는 객체의 멤버 중에는 private 멤버도 있으므로, 이러한 private 멤버에 직접 접근할 수 없기 때문이다.
따라서 private 멤버에 접근할 수 있는 초기화만을 위한 public 함수가 필요하다. 이러한 초기화 함수는 객체가 생성된 후부터 사용되기 전까지 반드시 멤버의 초기화를 위해 호출되어야 한다.

생성자(constructor)
C++에서는 객체의 생성과 동시에 멤버 변수를 초기화해주는 생성자(constructor)라는 멤버 함수를 제공합니다.

C++에서 클래스 생성자(constructor)의 이름은 해당 클래스의 이름과 같습니다.

즉, Book 클래스의 생성자는 Book()이 됩니다.

 

이러한 생성자는 다음과 같은 특징을 가집니다.

 

1. 생성자는 초기화를 위한 데이터를 인수로 전달받을 수 있습니다.

2. 생성자는 반환값이 없지만, void형으로 선언하지 않습니다.

3. 객체를 초기화하는 방법이 여러 개 존재할 경우에는 오버로딩 규칙에 따라 여러 개의 생성자를 가질 수 있습니다.

생성자의 선언
앞서 살펴본 Book 클래스의 생성자 원형은 다음과 같습니다.

예제
Book(const string& title, int total_page);

 

위의 예제처럼 클래스의 생성자는 어떠한 반환값도 명시하지 않음에 주의합니다.

 

다음 예제는 앞서 살펴본 Book 클래스의 생성자 원형에 따라 생성자 함수를 선언하는 예제입니다.

예제
Book::Book(const string& title, int total_page)
{

    title_ = title;           // 책의 제목을 초기화함.

    total_page_ = total_page; // 책의 총 페이지를 초기화함.

    current_page_ = 0;        // 현재 페이지를 0으로 초기화함.

    set_percent();            // 총 페이지와 현재 페이지로 해당 책을 읽은 정도를 초기화함.

}

생성자의 호출
C++에서는 클래스에서 객체를 생성할 때마다 해당 클래스의 생성자가 컴파일러에 의해 자동으로 호출됩니다. 

다음 예제는 Book 클래스의 객체를 생성하면서 생성자가 암시적으로 호출되는 예제입니다.
*/

// #include <iostream>
// using namespace std;

// int main(void)

// {

//     Book web_book = Book("HTML과 CSS", 350); // 생성자의 명시적 호출

//     // 생성자가 호출되어 멤버 변수인 percent_가 초기화되었는지를 확인함.

//     cout << web_book.percent_;

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