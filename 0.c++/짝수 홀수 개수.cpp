/*
정수가 담긴 리스트 num_list가 주어질 때, num_list의 원소 중 짝수와 홀수의 개수를 담은 배열을 return 하도록 solution 함수를 완성해보세요.

제한사항
1 ≤ num_list의 길이 ≤ 100
0 ≤ num_list의 원소 ≤ 1,000
입출력 예
num_list	    result
[1, 2, 3, 4, 5]	[2, 3]
[1, 3, 5, 7]	[0, 4]
입출력 예 설명
입출력 예 #1

[1, 2, 3, 4, 5]에는 짝수가 2, 4로 두 개, 홀수가 1, 3, 5로 세 개 있습니다.
입출력 예 #2

[1, 3, 5, 7]에는 짝수가 없고 홀수가 네 개 있습니다.
*/

// 반복문을 돌면서 2로 나누어지면 짝수 -> result[0]에 값 누적 더하기
// 반복문을 돌면서 2로 나누어지지 않으면 홀수 -> result[1]에 값 누적 더하기

#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int>num_list){
    vector<int> answer(2,0); // 0으로 초기화 된 2개의 원소를 가지는 벡터 생성
    for(const auto v: num_list){
        answer[v % 2]++; // 배열의 담긴 원소를 2로 나눈 나머지 1 -> 홀수이기 때문에  answer[1]의 누적 값 증가, 0이면 짝수이기 때문에 answer[0]에 누적 값 증가.

    }
    return answer;

}