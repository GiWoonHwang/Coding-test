/*
문자열이란 메모리에 저장된 일련의 연속된 문자들의 집합을 의미한다.
cpp 에서는 이러한 문자열을 다음과 같은 두 가지 방법으로 생성할 수 있다.

1. c언어 스타일의 문자열
2. string 클래스를 이용한 문자열

c언어 스타일의 문자열
cpp에서는 큰 따옴표를 사용해 표현되는 문자열을 문자열 상수라고 한다. 상수라고 표현하는 이유는 해당 문자열이 이름을 가지고 있지 않으며, 문자열의 내용 또한 변경할 수 없기 때문
cpp에서 문자형 배열을 선언하면 이 배열이 곧 문자열 변수가 된다.

널 문자
cpp에서 문자형 배열로 선언된 문자열 변수는 문자열의 끝을 프로그램에 따로 알려주어야 한다. 그래야만 프로그램이 실제 문자열에 속한 값과 그 외에 쓰레깃값을 구분할 수 있다.
따라서 문자열에 속한 데이터가 끝나면, 문자열의 끝을 의미하는 문자를 하나 더 삽입해 준다. 이러한 문자를 널(NULL) 문자라고 하며, '\0'으로 표시하고 아스키 코드값은 0이다.
널 문자의 유무로 문자형 데이터 배열과 실제 문자열을 서로 구분할 수 있다.  
*/

#include <iostream>
using namespace std;
#include <string>

int main(void){
    // cpp에서 문자열을 입력받기 위해서는 문자열이 저장될 문자형 배열을 미리 생성해야 놔야 한다
    const int SIZE = 20;
    char address[SIZE];
    char name[SIZE];

    cout << "자신의 이름을 적어주세요";
    cin >> name;
    
    cout << "자신이 살고 있는 도시를 적어주세요";
    cin >> address;

    cout << address << "에 살고 있는" << name << "님 감사합니다";
    // 위의 예제는 사용자의 이름과 살고 있는 도시명을 입력받는 예제이다. 하지만 이 예제는 다음과 같은 두 가지 문제점을 가지고 있다.
    // 1. 이름에 띄어쓰기가 들어가면 도시명을 입력할 수 없다.
    // 2. 20바이트 이상의 이름이나 도시명을 입력하면 프로그램이 강제 종료된다.

    // cpp에서 cin 객체는 띄어쓰기를 포함한 탭 문자, 캐리지 리턴 문자 등을 모두 문자열의 끝으로 인식한다. 따라서 띄어쓰기를 포함한 문자열을 전부 입력받으려면 cin 객체의 get() 메소드를 사용하여 다음처럼 수정해야 한다
    const int SIZE = 20;
    char address[SIZE];
    char name[SIZE];

    cout << "자신의 이름을 적어주세요";
    cin.get(name, SIZE).get();

    cout << "자신이 살고 있는 도시를 적어주세요";
    cin.get(address, SIZE).get();

    cout << address << "에 살고 있는" << name << "님 감사합니다.";
    // 위의 예제는 띄어쓰기를 포함한 이름이나 도시명을 정확히 입력할 수 있게 되었다. 하지만 아직도 20바이트 이상의 이름을 입력할 경우, 도시명을 입력받지 못하는 문제점을 안고 있다.
    // 이 문제는 cin 객체의 ignore() 메소드를 사용하여 다음처럼 수정할 수 있다
    const int SIZE = 20;
    char address[SIZE];
    char name[SIZE];

    cout << "자신의 이름을 적어주세요";
    cin.get(name, SIZE).ignore(SIZE, '\n');

    cout << "자신이 살고 있는 도시를 적어주세요";
    cin.get(address, SIZE).ignore(SIZE, '\n');

    cout << address << "에 살고 있는" << name << "님 감사합니다.";
    // 위의 결과를 살펴보면 20바이트 이상의 이름이나 도시명을 입력해도 정확히 20바이트까지만 입력받는 것을 볼 수 있다.

    // cpp의 string을 사용하면 문자열의 크기랄 미리 할당해 주지 않아도 된다
    string address, name;

    cout << "자신의 이름을 적어주세요";
    getline(cin, name); // 여기선 안되고

    cout << "자신이 살고 있는 도시를 적어주세요";
    getline(cin,address);

    cout << address << "에 살고 있는" << name << "님 감사합니다.";

    return 1;
}

int main(void)

{

    string address, name;

 

    cout << "자신의 이름을 적어주세요 : ";

    getline(cin, name); // 여기선 되는 이유가 뭘까 ? 

    cout << "자신이 살고 있는 도시를 적어주세요 : ";

    getline(cin, address);

 

    cout << address << "에 살고 있는 " << name << "님~ 감사합니다!";

    return 0;

}