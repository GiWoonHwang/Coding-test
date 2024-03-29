/*
메모리의 동적 할당
데이터 영역과 스택 영역에 할당되는 메모리의 크기는 컴파일 타임에 결정됩니다. 
하지만 힙 영역의 크기는 프로그램이 실행되는 도중인 런타임에 사용자가 직접 결정하게 된다.
이렇게 런 타임에 메모리를 할당받는 것을 메모리의 동적 할당 이라고 한다.

포인터의 가장 큰 목적은 런 타임에 이름 없는 메모리를 할당받아 포인터에 할당하여, 할당받은 메모리에 접근하는 것이다.
c언어에서는 malloc()함수 등의 라이브러리 함수를 제공하여 이러한 작업을 수행할 수 있게 해준다.
cpp에서도 c언어의 라이브러리 함수를 사용하여 메모리의 동적 할당 및 해제를 할 수 있다. 하지만 cpp에서는 메모리의 동적 할당 및 해제를 위한 더욱 효과적인 방법을 new 연산자와 delete 연산자를 통해 제공한다.

new 연산자
c언어에서는 malloc()이나 calloc()함수 등을 이용하여 메모리의 동적 할당을 수행한다. cpp에서도 위의 함수를 사용할 수 있지만, 더 나은 방법인 new 연산자를 이용한 방법을 제공
cpp에서 new 연산자는 다음과 같은 문법으로 사용한다.

타입* 포인터이름 = new 타입;
첫 번째 타입은 데이터에 맞는 포인터를 선언하기 위해, 두 번째 타입은 메모리의 종류를 지정하기 위해 사용됩니다.
만약 사용할 수 있느 메모리가 부족하여 새로운 메모리를 만들지 못했다면, new 연산자는 널 포인터를 반환합니다.
new 연산자는 자유 기억 공간 이라고 불리는 메모리공간에 객체를 위한 메모리를 할당받는다.
또한 new 연산자를 통해 할당받은 메모리는 따로 이름이 없으므로 해당 포인터로만 접근할 수 있게 된다.
*/

#include <iostream>
using namespace std;

int main(){
    /*
    delete 연산자
    c언어에서는 free()함수를 이용하여 동적으로 할당받은 메모리를 다시 운영체제로 반환한다. 이와 마찬가지로 cpp에서는 delete 연산자를 이용하여, 더는 사용하지 않는 메모리를 다시 메모리 공간에 돌려줄 수 있다.
    cpp에서 delete 연산자는 다음과 같은 문법으로 사용한다
    delete 포인터이름;
    다음 예제는 런 타임에 int형과 double형 데이터를 위한 메모리를 할당받고, delete 연산자를 사용하여 더 이상 사용하지 않는 메모리를 반환하는 예제이다.
    */
    int* ptr_int = new int;
    *ptr_int = 100;

    

    double* ptr_double = new double;

    *ptr_double = 100.123;    

    cout << "int형 숫자의 값은 " << *ptr_int << "입니다." << endl; // int형 숫자의 값은 100입니다.

    cout << "int형 숫자의 메모리 주소는 " << ptr_int << "입니다." << endl; // int형 숫자의 메모리 주소는 0x1d83010입니다.

    cout << "double형 숫자의 값은 " << *ptr_double << "입니다." << endl; // double형 숫자의 값은 100.123입니다.

    cout << "double형 숫자의 메모리 주소는 " << ptr_double << "입니다." << endl; // double형 숫자의 메모리 주소는 0x1d83030입니다.

    delete ptr_int;

    delete ptr_double;

    /*
    이때 new 연산자를 통해 생성한 메모리가 아닌 변수를 선언하여 생성한 메모리는 delete 연산자로 해제할 수 없다
    delete 연산자는 반드시 new 연산자를 통해 할당된 메모리를 해제할 때에만 사용해야 한다.
    또한 한번 해제한 메모리를 다시 해제하려고 시도하면 오류가 발생한다.
    */

    return 1;
}