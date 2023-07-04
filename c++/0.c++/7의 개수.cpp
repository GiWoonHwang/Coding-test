/*
머쓱이는 행운의 숫자 7을 가장 좋아합니다. 정수 배열 array가 매개변수로 주어질 때, 7이 총 몇 개 있는지 return 하도록 solution 함수를 완성해보세요.

제한사항
1 ≤ array의 길이 ≤ 100
0 ≤ array의 원소 ≤ 100,000
입출력 예
array	        result
[7, 77, 17]	    4
[10, 29]	    0
입출력 예 설명
입출력 예 #1

[7, 77, 17]에는 7이 4개 있으므로 4를 return 합니다.
입출력 예 #2

[10, 29]에는 7이 없으므로 0을 return 합니다.
*/

#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array){
    int answer = 0;
    for(auto num : array) // auto: num의 자료형을 추론하도록 설정해준다
    {
        while (num > 0) // while문을 써야 77같은 수를 처리할 수 있다. 77 / 10 == 7 이니까 while문이 한번 더 돌면서 7의 개수를 찾아 answer를 ++ 해준다.
        {
            if((num % 10 == 7))
                answer ++;
            num /= 10; // 10으로 나누어 0을 만든 후 while문을 끝낸다. 
                printf("10진 정수 출력(부호O) : %d\n", num);
            }
        
    }

}
