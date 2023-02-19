/*
cpp 에서 하나의 클래스에서 생선된 하나의 인스턴스는 각각 독립된 메모리 공간에 저장된 자신만읜 멤버 변수를 가지지만, 멤버 함수는 모두 인스턴스가 공유한다.
따라서 Book 클래스를 이용해 두 개의 인스턴스를 생성해도, TickerBook()이라는 멤버 함수는 하나만이 존재합니다.

즉, 더 두꺼운 책의 이름을 출력해 주는 TickerBook() 멤버 함수는 두 인스턴스가 같이 공유하게 됩니다.

const Book& Book:: ThickerBook(const Book& comp_book)
{
    if(comp_book.total_page > total_page_)
    {
        return comp_book;
    }
    else
    {
        return ??; // 자신을 호출한 인스턴스를 반환하는데 알 수가 없음
    }
}

그리고 ThickerBook() 멤버 함수는 다음과 같이 호출될 것입니다.

예제
web_book.ThickerBook(html_book);

이때  ThickerBook() 멤버 함수는 자신을 호출한 객체가 web_book 객체임을 인수를 통해 전달받아햐만 한다.
그래야만 else 문에서의 반환값을 정확히 명시할 수 있기 때문

위와 같은 이유로 cpp에서는 모든 멤버 함수가 자신만의 this 포인터를 가지고 있다. 이 this 포인터는 해당 멤버 함수를 호출한 객체를 가리키게 되며, 호출된 멤버 함수의 숨은 인수로 전달된다.
이렇게 하면 호출된 멤버 함순느 자신을 호출한 객체가 무엇인지 정확히 파악할 수 있다.
this 포인터를 사용하여 위의 ThickerBook() 멤버 함수를 정의하면 다음과 같다.

const Book& Book::ThickerBook(const Book& comp_book)

{

    if (comp_book.total_page_ > total_page_)

    {

        return comp_book;

    }

    else

    {

        return *this; // 자신을 호출한 인스턴스를 반환함.

    }

}
*/

// #include <iostream>
// using namespace std;

// int main(void){
//     Book web_book("html과 css", 350);
//     Book html_book("html과 컨퍼런스", 200);

//     cout << web_book.ThickerBook(html_book).title_; // 더 두꺼운 책의 이름을 출력함.

//     return 0;
// } 

// Book::Book(const string& title, int total_page)
// {
//     title_ = title;
//     total_page_ = total_page;
//     current_page = 0;
//     set_percent();
// }
// void Book::set_percent() { percent_ = (double) current_page_ / total_page_ * 100; }

 

// const Book& Book::ThickerBook(const Book& comp_book)

// {

//     if (comp_book.total_page_ > this->total_page_)

//     {

//         return comp_book;

//     }

//     else

//     {

//         return *this;

//     }

// }