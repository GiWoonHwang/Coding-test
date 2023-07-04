/*
cpp에서 프렌드는 전역 함수, 클래스, 멤버 함수의 세 가지 형태로 사용할 수 있다.

*/

class Rect

{

private:

    double height_;

    double width_;

public:

    Rect(double height, double width); // 생성자

    void height() const;

    void width() const;

    friend class Display; // 프렌드 클래스 선언

};

// class Rect

// {

// private:

//     double height_;

//     double width_;

// public:

//     Rect(double height, double width); // 생성자

//     void height() const;

//     void width() const;

//     friend void Display::ShowDiagonal(const Rect& target); // 프렌드 멤버 함수 선언

// };