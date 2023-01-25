/*
포인터 연산
포인터는 값을 증가시거나 감소시키 등의 제한된 연산만을 할 수 있습니다.

c++의 포인터 연산에는 다음과 같은 규칙이 있습니다.
1. 포인터끼리의 덧셈, 곱셈, 나눗셈은 아무런 의미가 없습니다.
2. 포인터끼리의 뺄셈은 두 포인터 사이의 상대적 거리를 나타냅니다.
3. 포인터에 정수를 더하거나 뺄 수는 있지만, 실수와의 연산은 허용하지 않습니다.
4. 포인터끼리 대입하거나 비교할 수 있습니다.

타입별 포인터 연산
cpp의 포인터 연산에서 포인터 연산 후 각각의 포인터가 가리키고 있는 주소는 포인터의 타입에 따라 달라집니다.
그 증가 폭은 포인터가 가리키는 변수의 크기와 같습니다.
int *ptr
ptr     = 0x00 ~ 0x03
ptr + 1 = 0x04 ~ 0x07
ptr + 2 = 0x08, 0x09, 0x0A, 0x0B
ptr + 3 = 0x0C, 0x0D, 0x0E, 0x0F
예를 들어, int형 포인터의 증가폭은 int 형 타입의 크기인 4바이트만큼 증가하게 됩니다.

*/

#include <iostream>
using namespace std;

int main(){
    /*
    포인터와 배열의 관계
    포인터와 배열은 매우 긴밀한 관계를 맺고 있으며, 어떤 부분에서는 서로 대체할 수도 있다.
    배열의 이름은 그 값을 변경할 수 없는 상수라는 점을 제외하면 포인터와 같다. cpp에서는 배열의 이름을 포인터처럼 사용할 수 있으 뿐만 아니라, 포인터를 배열의 이름처럼 사용할 수도 있다.
    즉, cpp에서는 배열의 이름이 주소로 해석되며, 해당 배열의 첫 번째 요소의 주소와 같게 됩니다.
    */
   int arr[3] = {10, 20, 30}; // 배열 선언

   int* ptr_arr = arr; // 포인터에 배열의 이름을 대입함.  
   
   cout << "배열의 이름을 이용하여 배열 요소에 접근 : " << arr[0] << ", " << arr[1] << ", " << arr[2] << endl; // 배열의 이름을 이용하여 배열 요소에 접근 : 10, 20, 30
   
   cout << " 포인터를 이용하여 배열 요소에 접근 : "  << ptr_arr[0] << ", " << ptr_arr[1] << ", " << ptr_arr[2] << endl; // 포인터를 이용하여 배열 요소에 접근 : 10, 20, 30
   
   cout << "배열의 이름을 이용한 배열의 크기 계산 : " << sizeof(arr) << endl; // 배열의 이름을 이용한 배열의 크기 계산 : 12
   
   cout << " 포인터를 이용한 배열의 크기 계산 : " << sizeof(ptr_arr); // 포인터를 이용한 배열의 크기 계산 : 8
   /*
   위의 예제에서는 포인터에 배열의 이름을 대입한 후 해당 포인터를 배열의 이름처럼 사용한다.
   하지만 배열의 크기를 계산할 때에는 배열의 이름과 포인터 사이에 큰 차이가 발생한다. 배열의 이름을 이용한 크기 계산에서는 배열의 크기가 int형 배열 요소 3개의 크기인 12바이트로 제대로 출력된다
   하지만 포인터를 이용한 크기 계산에서는 배열의 크기가 아닌 포인터 변수 자체의 크기가 출력되는 차이가 생긴다.

   배열의 포인터 연산
   다음 예제네는 앞선 예제와는 반대로 배열의 이름을 포인터처럼 사용하는 예제이빈다. 이 예제에서는 배열의 이름으로 포인터 연산을 진행하여 배열의 요소에 접근합니다.   

   arr이 배열의 이름이거나 포인터이고 n이 정수일 때,
   arr[n] = *(arr + n)
   위 공식은 1차원 배열뿐만 아니라 다차원 배열에서도 언제나 성립된다

   배열에 관계된 연산을 할 때는 언제나 배열의 크기를 넘어서는 접근을 하지 않도록 주의해야 합니다.

   포인터 연산을 이용하여 계산하다가 배열의 크기를 넘어서는 접근을 하는 경우, C++ 컴파일러는 어떠한 오류도 발생시키지 않습니다.
   
   다만 잘못된 결과만을 반환하므로 C++로 프로그래밍할 때에는 언제나 배열의 크기에 주의해야 합니다.
   */
   int arr[3] = {10, 20, 30}; // 배열 선언 

   cout << " 배열의 이름을 이용하여 배열 요소에 접근 : " << arr[0] << ", " << arr[1] << ", " << arr[2] << endl; // 배열의 이름을 이용하여 배열 요소에 접근 : 10, 20, 30
   
   cout << "배열의 이름으로 포인터 연산을 해 배열 요소에 접근 : " << *(arr+0) << ", " << *(arr+1) << ", " << *(arr+2);// 배열의 이름으로 포인터 연산을 해 배열 요소에 접근 : 10, 20, 30

    




     
}

