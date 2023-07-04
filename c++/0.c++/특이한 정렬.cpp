/*
정수 n을 기준으로 n과 가까운 수부터 정렬하려고 합니다. 이때 n으로부터의 거리가 같다면 더 큰 수를 앞에 오도록 배치합니다. 정수가 담긴 배열 numlist와 정수 n이 주어질 때 numlist의 원소를 n으로부터 가까운 순서대로 정렬한 배열을 return하도록 solution 함수를 완성해주세요.

제한사항
1 ≤ n ≤ 10,000
1 ≤ numlist의 원소 ≤ 10,000
1 ≤ numlist의 길이 ≤ 100
numlist는 중복된 원소를 갖지 않습니다.
입출력 예
numlist	                        n	result
[1, 2, 3, 4, 5, 6]	            4	[4, 5, 3, 6, 2, 1]
[10000,20,36,47,40,6,10,7000]	30	[36, 40, 20, 47, 10, 6, 7000, 10000]
입출력 예 설명
입출력 예 #1

4에서 가까운 순으로 [4, 5, 3, 6, 2, 1]을 return합니다.
3과 5는 거리가 같으므로 더 큰 5가 앞에 와야 합니다.
2와 6은 거리가 같으므로 더 큰 6이 앞에 와야 합니다.
입출력 예 #2

30에서 가까운 순으로 [36, 40, 20, 47, 10, 6, 7000, 10000]을 return합니다.
20과 40은 거리가 같으므로 더 큰 40이 앞에 와야 합니다.
*/

// 배열의 값과 n값의 차를 구해 작을수록 가까운 수가 아닐까?

#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int num;

// 비교하는 함수인 compare를 만든다
bool compare(int prev, int next){
    if(abs(prev - num) == abs(next - num)) // 만약 크기가 같으면
        return prev > next; // 내림차순(큰 값) 부터 정렬 (크다는 것의 기준은 왼쪽이 오른쪽에 비해서가 기준이기 때문에 왼쪽에 있는 것이 더 클 수 있도록 정렬하겠다)
    return abs(prev - num) < abs(next - num); // 이건 그냥 오름차순 정렬인가? 잘 모르겠음
}

vector<int> solution(vector<int> numlist, int n ){
    num = n;
    sort(numlist.begin(), numlist.end(), compare);
    return numlist;
}