/*
외과의사 머쓱이는 응급실에 온 환자의 응급도를 기준으로 진료 순서를 정하려고 합니다. 정수 배열 emergency가 매개변수로 주어질 때 응급도가 높은 순서대로 진료 순서를 정한 배열을 return하도록 solution 함수를 완성해주세요.

제한사항
중복된 원소는 없습니다.
1 ≤ emergency의 길이 ≤ 10
1 ≤ emergency의 원소 ≤ 100
입출력 예
emergency	            result
[3, 76, 24]	            [3, 1, 2]
[1, 2, 3, 4, 5, 6, 7]	[7, 6, 5, 4, 3, 2, 1]
[30, 10, 23, 6, 100]	[2, 4, 3, 5, 1]
입출력 예 설명
입출력 예 #1

emergency가 [3, 76, 24]이므로 응급도의 크기 순서대로 번호를 매긴 [3, 1, 2]를 return합니다.
입출력 예 #2

emergency가 [1, 2, 3, 4, 5, 6, 7]이므로 응급도의 크기 순서대로 번호를 매긴 [7, 6, 5, 4, 3, 2, 1]를 return합니다.
입출력 예 #3

emergency가 [30, 10, 23, 6, 100]이므로 응급도의 크기 순서대로 번호를 매긴 [2, 4, 3, 5, 1]를 return합니다.
*/

// emergency를 내림차순으로 정렬(높은 수 일수록 우선순위가 높기 때문에 앞에 인덱스를 차지하면 됨) -> 값과 인덱스를 key : value로 하는 객체? 딕셔너리? map 생성(1부터 시작해야함)
// emergency을 반복문을 통해 돌면서 해당 key에 대한 값(인덱스)를 배열에 담는다. 라고 했지만 cpp는 다르게 풀어야 한다.

#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

vector<int> solution(vector<int> emergency) {
    vector<int> answer;

    for(const auto v : emergency)
    {
        int count = 1;
        for(const auto v2 : emergency)
        {
            cout << "count " << count << endl;
            count += v2 > v;
            cout << "count++ " << count << endl;
        }
        answer.emplace_back(count);
    }

    return answer;
}

/*
1.빈 배열과 1을 가지는 변수를 선언한다(순위는 1부터 시작하기 때문에)
2.emergency을 이중반복문을 통해 자기자신을 비교한다. ex) emergency = [1,2,3,4,5] 라면 1일때 1,2,3,4,5 2일때 1,2,3,4,5
3.j가 i보다 크다면 변수를 1씩 더해준다.(후순위로 밀리게 됨)
4.내부 for문이 끝나면 빈배열에 변수를 넣어주고 변수를 1로 초기화 다시 반복문 진행
*/