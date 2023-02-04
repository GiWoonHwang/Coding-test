/*
머쓱이는 친구들과 동그랗게 서서 공 던지기 게임을 하고 있습니다. 공은 1번부터 던지며 오른쪽으로 한 명을 건너뛰고 그다음 사람에게만 던질 수 있습니다. 친구들의 번호가 들어있는 정수 배열 numbers와 정수 K가 주어질 때, k번째로 공을 던지는 사람의 번호는 무엇인지 return 하도록 solution 함수를 완성해보세요.

제한사항
2 < numbers의 길이 < 100
0 < k < 1,000
numbers의 첫 번째와 마지막 번호는 실제로 바로 옆에 있습니다.
numbers는 1부터 시작하며 번호는 순서대로 올라갑니다.
입출력 예
numbers	            k	result
[1, 2, 3, 4]	    2	3
[1, 2, 3, 4, 5, 6]	5	3
[1, 2, 3]	        3	2
입출력 예 설명
입출력 예 #1

1번은 첫 번째로 3번에게 공을 던집니다.
3번은 두 번째로 1번에게 공을 던집니다.
입출력 예 #2

1번은 첫 번째로 3번에게 공을 던집니다.
3번은 두 번째로 5번에게 공을 던집니다.
5번은 세 번째로 1번에게 공을 던집니다.
1번은 네 번째로 3번에게 공을 던집니다.
3번은 다섯 번째로 5번에게 공을 던집니다.
입출력 예 #3

1번은 첫 번째로 3번에게 공을 던집니다.
3번은 두 번째로 2번에게 공을 던집니다.
2번은 세 번째로 1번에게 공을 던집니다.
*/


// 첫 번째 선수가 공을 갖고있음
// 마지막 공을 던질 선수를 찾기 위해 k-1번까지 반복(k로 반복하게 되면 공을 받는 사람을 가르키게 된다), 다음 사람을 건너뛰도록 +2를 함께 해줌
// 마지막 번호를 넘어가는 경우 처음 선수에게 공이 전달되도록 배열의 크기만큼 마이너스 한다.

#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers, int k ){
    int answer = 1;
    for(int i =0; i < k-1; i++){
        answer += 2;
        if(numbers.size() < answer) answer  = answer - numbers.size();
    }  

    return answer;
}