/*
i팩토리얼 (i!)은 1부터 i까지 정수의 곱을 의미합니다. 예를들어 5! = 5 * 4 * 3 * 2 * 1 = 120 입니다. 정수 n이 주어질 때 다음 조건을 만족하는 가장 큰 정수 i를 return 하도록 solution 함수를 완성해주세요.

i! ≤ n
제한사항
0 < n ≤ 3,628,800
입출력 예
n	    result
3628800	10
7	    3
입출력 예 설명
입출력 예 #1

10! = 3,628,800입니다. n이 3628800이므로 최대 팩토리얼인 10을 return 합니다.
입출력 예 #2

3! = 6, 4! = 24입니다. n이 7이므로, 7 이하의 최대 팩토리얼인 3을 return 합니다.
*/

#include <string>
#include <vector>

using namespace std;

int factorial(int n){
    if(n== 0 || n ==1){
        return 1;
    }
    else{
        return n * factorial(n-1);
    }
}

/*
0 < n ≤ 3,628,800이므로 n의 범위는 10까지이다
*/
int solution(int n){
    int i =10; // 애초에 10으로 값을 주고
    while(factorial(i) > n){
        // n이 3628800라면 최대값이기 때문에 애초에 while문을 들어올 수가 없다
        // 따라서 i = 10;을 바로 라틴허게 된다.
        i --; 
    }
    return i;
}