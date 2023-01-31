/*
인수 전달 방법
함수를 호출할 때에는 함수에 필요한 데이터를 인수로 전달해 줄 수 있다.
이렇게 함수에 인수를 전달하는 방법에는 크게 다음과 같이 두 가지 방법이 있다.

1. 값에 의한 전달(call by value)
2. 참조에 의한 전달(call by reference)

값에 의한 전달
값에 의한 전달 방법은 인수로 전달되는 변수가 가지고 있는 값을 함수 내의 매개변수에 복사하는 방식
이렇게 복사된 값으로 초기화된 매개변수는 인수로 전달된 변수와는 완전히 별개의 변수가 된다.
따라서 함수 내에서의 매개변수 조작은 인수로 전달되는 변수에 아무런 영향을 미치지 않는다.

참조에 의한 전달
참조에 의한 전달 방법은 인수로 전달된 변수의 값을 복사하는 것이 아닌, 원본 데이터를 직접 전달하는 것입니다.
c언어에서는 이러한 작업을 포인터를 사용하여 인수로 전달된 변수의 주소값을 전달한다.
하지만 cpp에서는 이러한 작업을 참조자(reference)를 사용하여 전달할 수 있다. 
*/

#include <iostream>
#include <string>

using namespace std;

void Local(int);

int main(){
    int var = 10;
    cout << "변수 var의 초기값은" << var << "입니다." << endl; // 10

    Local(var);
    cout << "Local() 함수 호출 후 변수 var의 값은" << var << "입니다."; // 10
    return 0;
}

void Local(int num){
    num += 10;
}


// 참조에 의한 전달 예제
void Local(int);

int main(){
    int var = 10;
    cout << "변수 var의 초기값은" << var << "입니다." << endl; // 10

    Local(var);
    cout << "Local() 함수 호출 후 변수 var의 값은" << var << "입니다."; // 20
    return 0;
}

void Local(int& num){
    num += 10;
}

/*
mian() 함수는 프로그램이 실행되면 제일 먼저 자동으로 호출되는 함수이다. 이러한 main() 함수도 함수이기 때문에 인수를 전달받을 수도 있고, 반환값을 가질 수도 있다.
main() 함수의 원형은 다음과 같다.

void(또는 int) main(int argc,char *argv[], char *env[]);

argc: 운영체제가 프로그램을 실행했을 때 전달되는 인수의 개수가 저장된다.
argv: 프로그램에 전달된 실제 인수값(파일 이름)이 저장된다. ex) C:\Game\Rythm.exe
env : 운영체제의 환경변수 이름을 알려준다.

*/