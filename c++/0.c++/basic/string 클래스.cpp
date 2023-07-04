/*
c++은 문자열을 예전의 c언어 스타일뿐만 아니라, 새롭게 추가된 string 클래스를 이용하여 처리할 수 있도록 해준다.
string 클래스는 문자형 배열보다 사용하기 편히하며, 문자열을 하나의 타입처럼 표현할 수 있게 해준다.
c++에서 string 클래스를 사용하기 위해서는 우선 string 헤더 파일을 포함해야 한다. 또한 string 클래스는 std 네임스페이스에 속해 있으므로 using 지시자를 사용하거나 해당 네임스페이스를 참조해야 한다

cpp에서 string 객체를 사용한 문자열 선언 방식은 다음과 같다.
string str1 // 선언
str1 = "c++ programing" // 초기화

string str2 = "c++" // 선언과 동시에 초기화
string 객체는 위와 같이 문자열을 배열 형태가 아닌 단순한 변수로 선언한다. 
따라서 사용자가 길이를 명시하지 않아도 되며, 문자열 길의에 대한 문제는 c++ 프로그램이 자동으로 처리해준다.
문자열 str1은 선언 시 길이가 0인 string 객체를 생성한다. 그 후 문자열을 초기화 하면 c++ 프로그램이 문자열 str1의 길이를 자동으로 조절해준다
따라서 string 객체를 사용하면 문자형 배열을 사용하는 것보다 훨씬 더 편맇고 안전하게 문자열을 처리할 수 있다.
*/

#include <iostream>
#include <string>

using namespace std;

int main(){

    string dog;

    cout << "현재 dog 변수의 길이는 " << dog.length() << "입니다." << endl; 

    dog = "Navi";

    cout << dog << "! 정말 이쁜 이름이네요!" << endl;    

    cout << "현재 dog 변수의 길이는 " << dog.length() << "입니다." << endl;

    cout << "강아지 이름의 첫 글자는 바로 " << dog[0] << "입니다.";
    // 위의 예제에서 보면 string 객체로 만든 문자열도 배열처럼 인덱스를 통해 다룰수 있다는 것을 알 수 있다.
    // 컴퓨터에서 한글은 2바이트로 취급된다.

    /*
    문자열 처리
    cpp에서 string 객체를 이용한 문자열의 처리는 문자형 배열을 이용하는 방식보다 훨씬 더 간단합니다.
    C언어에서 문자형 배열 사이의 대입 작업은 strcpy() 함수나 strncpy() 함수를 사용했습니다. 하지만 string 객체를 이용한 문자열에서는 대입 연산자(=)만을 사용하여 간단히 대입 작업을 할 수 있습니다.

    string str1 = "C++ is Cool!";

    string str2; 

    str2 = str1; // 문자열 대입 연산

    cout << str2; C++ is Cool!
    ----------------------------------------------------------------------------------------
    
    string str1 = "C++ is ";

    string str2 = "Cool! and funny!";

    string str3;    

    str3 = str1 + str2; // 문자열 결합 연산

    cout << str3 << endl;  C++ is Cool! and funny!

    str1 += str2;       // 문자열 추가 연산

    cout << str1; C++ is Cool! and funny!
    ----------------------------------------------------------------------------------------

    string 객체를 이용한 문자열의 입력에는 cin 객체를, 출력에는 cout 객체를 사용할 수 있다.
    하지만 cin 객체를 이용한 문자열의 입력은 한 단어 단위로 수행된다 따라서 문자열을 한 행씩 읽고 싶을 때는 getline() 함수를 사용해야 한다
    string name, subject; 

    cout << "자신의 이름을 적어주세요 : ";

    getline(cin, name);

    cout << "가장 자신있는 과목을 적어주세요 : ";

    getline(cin, subject);    

    cout << name << "님이 가장 자신있어 하는 과목은 바로 " << subject << "입니다!";



    */

    return 1;
}