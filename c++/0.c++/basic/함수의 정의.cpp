/*
함수란 하나의 특별한 목적의 작업을 수행하기 위해 독립적으로 설계된 코드의 집합으로 정의할 수 있다.
cpp 프로그램에서 함수는 특정 작업을 캡슐화하는데 유용하게 사용된다.

함수를 사용하는 이유
함수를 사용하는 가장 큰 이유는 바로 반복적인 프로그래밍을 피할 수 있기 때문이다.
프로그램에서 특정 작업을 여러 번 반복해야 할 때는 해당 작업을 수행하는 함수를 작성하면 된다.
그리고서 프로그램이 필요할 때마다 작성한 함수를 호출하면 해당 작업을 반복해서 수행할 수 있다.
또한, 프로그램을 여러 개의 함수로 나누어 작성하면, 모듈화로 인해 전체적인 코드의 가독성이 좋아진다. 그리고 프로그램에 문제가 발생하거나 기능의 변경이 필요할 때에도 손쉽게 유지보수 할 수 있다.

함수의 선언
반환 자료형 함수이름 (매개변수 목록){
    함수 몸체

    
}
함수 호출 시에는 여러 개의 인수를 전달할 수 있지만, 함수가 반환할 수 있는 값은 1개를 넘지 못한다.
cpp 에서는 반환값으로 배열을 제외한 모든 타입을 사용할 수 있다. 하지만 구조체나 객체에 포함된 배열은 반환 할 수 있다.
*/

#include <iostream>
using namespace std;

int small_num(int num1, int num2){
    if (num1 <= num2){
        return num1;
    }
    else{
        return num2;
    }
}

int main(void){

    int result;

    result = small_num(4,6);
    cout << "두 수중 더 작은 수는" << result << "입니다" << "endl";
    
    result = small_num(8, 6);
    cout << " 두 수 중 더 작은 수는 " << result << "입니다." << endl;

    result = small_num(2, 8);
    cout << " 두 수 중 더 작은 수는 " << result << "입니다." << endl;

    return 0;
}

// -------------------------------------------------------------------------------------------
/*
C++에서는 가장 먼저 main() 함수가 컴파일러에 의해 컴파일됩니다.

 

위의 예제에서 컴파일러는 main() 함수에 등장하는 SmallNum() 함수를 아직 알지 못하기 때문에 컴파일 오류를 발생시킵니다.

따라서 컴파일러에 SmallNum() 함수는 나중에 정의되어 있다고 알려줘야 합니다.

그 역할을 하는 것이 바로 함수의 원형을 선언하는 것입니다.

 

ANSI C에서는 기존 C언어와의 호환성을 유지하기 위해서 함수의 원형을 사용하지 않아도 되지만, C++에서는 반드시 함수의 원형을 사용해야만 합니다.

반환타입 SmallNum(매개변수목록);
*/

#include <iostream>

using namespace std;  

int SmallNum(int, int);  
 

int main(void)

{

    int result;  

 

    result = SmallNum(4, 6);

    cout << " 두 수 중 더 작은 수는 " << result << "입니다." << endl;

    result = SmallNum(8, 6);

    cout << " 두 수 중 더 작은 수는 " << result << "입니다." << endl;

    result = SmallNum(2, 8);

    cout << " 두 수 중 더 작은 수는 " << result << "입니다." << endl;

    return 0;

}  
 

int SmallNum(int num1, int num2)

{

    if (num1 <= num2)

    {

        return num1;

    }

    else

    {

        return num2;

    }

}