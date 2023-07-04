/*
문제 설명
약수의 개수가 세 개 이상인 수를 합성수라고 합니다. 자연수 n이 매개변수로 주어질 때 n이하의 합성수의 개수를 return하도록 solution 함수를 완성해주세요.

제한사항
1 ≤ n ≤ 100
입출력 예
n	result
10	5
15	8
입출력 예 설명
입출력 예 #1

10 이하 합성수는 4, 6, 8, 9, 10 로 5개입니다. 따라서 5를 return합니다.
입출력 예 #1

15 이하 합성수는 4, 6, 8, 9, 10, 12, 14, 15 로 8개입니다. 따라서 8을 return합니다.
*/

// 합성수는 약수가 세개인 수, 배열을하나 만들고 난 후 2중 반복문을사용, 1부터 n+1 까지, 1부터 i까지, 만약 i % j == 0 (약수)면 배열에 i값을 추가해준다.
// 모든 반복문이 끝난 후 끝난 후 배열에 i값이 세개 이상인 것들은 세어준다.

#include <string>
#include <vector>

using namespace std;

bool is_composite(int n ){
    int answer = 0;
    for(int i =1; i <= n; i ++){
        if(n % i == 0){
            answer ++;
        }
        if(answer >= 3){
            return true;
        }
    }
    return false;
}

int solution(int n){
    int answer = 0;
    for(int i=4; i<= n; i++){
        if(is_composite(i)){
            answer ++;
        }
    }
}