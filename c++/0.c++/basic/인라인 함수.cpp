/*
인라인 함수

cpp에서의 함수 호출 과정
함수가 호출되면 우선 스택에 함수로 전달할 매개변수와 함께 호출이 끝난 뒤 돌아갈 반환 주소값을 저장하게 된다.
그리고서 프로그램의 제어가 함수의 위치로 넘어와 함수 내에 선언된 지역 변수도 스택에 저장한다.
그때부터 함수의 모든 코드를 실행하게 되고, 실행이 전부 끝나면 반환값을 넘겨 줍니다. 그 후 프로그램의 제어는 스택에 저장된 돌아갈 반환 주소값으로 이동하여, 스택에 저장된 함수 호출 정보를 제거한다.
이와 같은 일련의 함수 호출 과정이 함수마다 일어나게 된다.

정리: 매개변수 + 반환 주소값이 스택으로 이동 -> 함수 내의 지역 변수도 스택에 저장 -> 반환 주소값으로 이동하여 스택에 저장된 함수 호출 정보를 제거

인라인 함수
위와 같이 cpp 에서 함수의 호출은 꽤 복잡한 과정을 거치므로, 약간의 시간이 걸리게 된다. 이때 함수를 실행하는 시간이 오래 걸린다면, 함수를 호출하는데 걸리는 시간은 전혀 문제가 되지 않는다.
하지만 함수의 실행 시간이 매우 짧다면, 함수 호출에 걸리는 시간도 부담이 될 수 있다.
cpp에서는 이러한 경우에 사용할 수 있는 인라인 함수라는것을 제공한다. 인라인 함수는 호출될 때 일반적인 함수의 호출 과정을 거치지 않고, 함수의 모든 코드를 호출된 자리에 바로 삽입하는 방식의 함수이다.
이 방식은 함수를 호출하는ㄷ데 걸리는 시간은 절약되나, 함수 호출 과정으로 생기는 여러 이점을 포기하게 된다. 따라서 코드가 매우 적은 함수만을 인라인 함수로 선언하는게 좋다.

inline 함수의원형

또는

inline 함수의정의

inline 키워드는 함수의 원형이나 함수의 정의 어느 한 쪽에만 표기해도 되며, 양쪽 다 표기해도 상관없다.

*/
#include <iostream>

using namespace std;

inline int Sub(int x, int y) { return x - y; }

inline void Print(int x) { cout << "계산 결과는 " << x << "입니다."; } 
 
int main(void)

{

    int num1 = 5, num2 = 3;

    int result;

 

    result = Sub(num1, num2);

    Print(result);

    return 0;

}
/*
위의 예제에서 Sub() 함수와 Print() 함수는 인라인 함수로 정의되어 호출됩니다.

보통 인라인 함수는 크기가 작으므로, 함수의 원형이 나오는 자리에 함수의 본체까지 함께 정의하는 경우가 많습니다.

위의 예제는 실제로는 다음과 같이 인라인 코드로 삽입되어 실행됩니다.
인라인 함수는 재귀호출이 허용되지 않는다.
*/


/*
c언어에서는 c++의 인라인 함수와 비슷한 기능의 매크로 함수를 사용한다.
#define 선행처리 지시문에 인수로 함수의 정의를 전달함으로써 , 함수처럼 동작하는 매크로를 만들 수 있다.
이러한 매크로를 함수 같은 매크로 또는 매크로 함수라고 한다. 하지만 매크로 함수는 일반 함수와는 달리 단순 치환만을 해주므로, 일반 함수와 똑같은 방식으로 동작하지 않는다.
매크로 함수를 일반 함수처럼 사용하기 위해서는 모든 인수를 괄호({})로 감싸야만 한다.
*/

#include <stdio.h>

#define SQR(X) ((X)*(X));

 

int main(void)

{

    int result;

    int x = 5;

 

    // puts(SQR(10)); // 100

    // puts(SQR(x)); // 25

    // puts(SQR(x+3)); // 23

    return 0;

}

/*
하지만 cpp의 인라인 함수는 단순 치환이 아닌 함수의 모든 코드를 호출된 자리에 인라인 코드로 삽입해 주는 것이다.
따라서 일반 함수처럼 값이나 수식을 인수로 전달할 수 있으며, 매개변수 타입에 맞춘 자동 타입 변환도 지원한다.
*/

inline int Sqr(int x) { return x * x; } 

int main(void)

{

    int result;

    int x = 5;

 

    cout << "계산 결과는 " << Sqr(10) << "입니다." << endl;

    cout << "계산 결과는 " << Sqr(x) << "입니다." << endl;

    cout << "계산 결과는 " << Sqr(x+3) << "입니다.";

    return 0;

}