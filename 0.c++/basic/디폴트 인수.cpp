/*
cpp에서 새롭게 정의된 디폴트 인수는 기본값이 미리 정의되어 있는 인수를 의미한다.
함수를 호출할 때 인수를 전달하지 않으면, 함수는 자동으로 미리 정의되어 있는 디폴트 인수값을 사용하게 된다.
물론 인수를 전달하여 함수를 호출하면, 디폴트 인수값이 아닌 전달된 인수를 가지고 함수를 호출하게 된다.

디폴트 인수의 설정
CPP에서 디폴트 인수를 설정할 때에는 다음과 같은 사항에 주의해야 한다.
1. 디폴트 인수는 함수의 원형에만 지정할 수 있다.
2. 디폴트 인수는 가장 오른쪽부터 시작하여 순서대로 지정할 수 있다.
3. 가운데 인수들만 별도로 디폴트 인수를 지정할 수는 없다.

1. void Display(int x, int y, char ch, int z = 4);       // 가능함.

2. void Display(int x, int y, char ch = 'a', int z = 4); // 가능함.

3. void Display(int x, int y = 2, char ch, int z = 4);   // 오류

4. void Display(int x = 1, int y = 2, char ch, int z);   // 오류

디폴트 인수가 설정된 함수의 호출
함수로 전달된 인수는 왼쪽부터 순서대로 매개변수 목록에 대입된다.
따라서 디폴트 인수가 설정된 함수를 호출할 때에는 인수의 전달을 건너뛸 수 없다.

void Display(int x, int y, char ch = 'a', int z = 4); // 함수의 원형 

1. Display(1, 2);         // 가능함 -> display(1, 2, 'a', 4)와 같음.

2. Display(3, 4, 'b');    // 가능함 -> display(3, 4, 'b', 4)와 같음.

3. Display(5, 6, 'c', 9); // 가능함 -> display(5, 6, 'c', 8)와 같음.

4. Display(7, 8, , 9);    // 오류 : 인수 전달은 건너뛸 수 없음.
*/

#include <iostream>
using namespace std;

double Multi(double, double = 2);

 

int main(void)

{

    cout << Multi(3) << endl;    // Multi(3, 2)와 같음 : 3 * 3

    cout << Multi(3, 3) << endl; // 3 * 3 * 3

    cout << Multi(3, 4);         // 3 * 3 * 3 * 3

    return 0;

}

 

double Multi(double x, double n)

{

    double result = x;

 

    for (int i = 1; i < n; i++)

    {

        result *= x;

    }

    return result;

}