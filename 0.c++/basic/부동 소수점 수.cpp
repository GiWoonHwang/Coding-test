/*
컴퓨터에서 실수를 표현하는 비법은 정수에 비해 훨씬 복잡하다. 왜냐하면 컴퓨터에서는 실수를 정수와 마찬가지로 2진수로만 표현해야 하기 때문입니다.
따라서 실수를 표현하기 위한 다양한 방법들이 연구되고 있으며 크게 두 가지 방식이 있다.

1. 고정 소수점 방식
2. 부동 소수점 방식

고정 소수점 방식
실수는 보통 정수부와 소수부로 나눌 수 있습니다. 따라서 실수를 표현하는 가장 간단한 방식은 소수부의 자릿수를 미리 정하여, 고정된 자릿수의 소수를 표현하는 것
32비트 실수를 고정 소수점 방식으로 표현하면 다음과 같다.
1비트 15비트 16비트
부호  정수부 소수부  => 32비트
하지만 이 방식은 정수부와 소수부의 자릿수가 크지 않으므로, 표현할 수 있는 범위가 매우 적다는 단점이 존재

부동 소수점 방식
실수는 보통 정수부와 소수부로 나누지만, 가수부와 지수부로 나누어 표현할 수도 있다.
고정 소수점 방식은 제한된 자릿수로 인해 표현할 수 있는 범위가 매우 작지만, 부동 소수점 방식은 다음 수식을 이용하여 매우 큰 실수까지도 표현 할 수 있다.
+-(1.가수부)x2^지수부-127
-3.14E+16

float형 부동 소수점 방식
1비트 8비트  23비트
부호  지수부 가수  => 32비트

double 부동 소수점 방식
1비트 11비트 52비트
부호  지수부 가수부 => 64비트

부동 소수점 방식의 오차
부동 소수점 방식은 항상 오차가 발생한다. 공식을 사용하면 표현할 수 있는 범위는 늘어나지만, 10진수를 정확하게 표현할 수는 없게 된다.
컴퓨터에서 실수를 표현하는 방법은 정확한 표현이 아닌 언제나 근사치를 표현할 뿐임을 명심해야 한다.
*/
#include <iostream>
using namespace std;

int main(){
    int i;
    float sum = 0;
    for(i= 0; i <1000; i++){
        sum += 0.1;
    }

    cout << "0.1을 1000번 더한 합계는" << sum << "입니다,"; // 1000이 나와야 하지만 99.999가 나온다
    return 0;
}

