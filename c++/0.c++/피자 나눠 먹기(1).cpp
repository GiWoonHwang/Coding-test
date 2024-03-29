/*
머쓱이네 피자가게는 피자를 일곱 조각으로 잘라 줍니다. 피자를 나눠먹을 사람의 수 n이 주어질 때, 모든 사람이 피자를 한 조각 이상 먹기 위해 필요한 피자의 수를 return 하는 solution 함수를 완성해보세요.

제한사항
1 ≤ n ≤ 100
입출력 예
n	result
7	1
1	1
15	3
입출력 예 설명
입출력 예 #1

7명이 최소 한 조각씩 먹기 위해서 최소 1판이 필요합니다.
입출력 예 #2

1명은 최소 한 조각을 먹기 위해 1판이 필요합니다.
입출력 예 #3
*/

// 한조각 이상 먹어야한다 == 7로 나누어 떨어져야 한다.
// 나누어 떨어지지 않는다 -> 한판 추가해준다.

#include <string>

int solution(int n){
    int answer = n / 7; // 만약 n=1 이라면,  answer = 0 이고 나머지는 1
    if(n % 7 != 0){ // 나머지가 있다면
        answer++; // 1(한판) 증가
    }
    return answer; // 사람이 한명일 때는 한판
}
