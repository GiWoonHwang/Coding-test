/*
정수 배열 numbers가 매개변수로 주어집니다. numbers의 원소 중 두 개를 곱해 만들 수 있는 최댓값을 return하도록 solution 함수를 완성해주세요.

제한사항
-10,000 ≤ numbers의 원소 ≤ 10,000
2 ≤ numbers 의 길이 ≤ 100
입출력 예
numbers	                    result
[1, 2, -3, 4, -5]	        15
[0, -31, 24, 10, 1, 9]	    240
[10, 20, 30, 5, 5, 20, 5]	600
입출력 예 설명
입출력 예 #1

두 수의 곱중 최댓값은 -3 * -5 = 15 입니다.
입출력 예 #2

두 수의 곱중 최댓값은 10 * 24 = 240 입니다.
입출력 예 #3

두 수의 곱중 최댓값은 20 * 30 = 600 입니다.
*/

// 음수의 곱은 양수이다. 예를들어 [1,2,-3,4,-5] 를 오름차순으로 정렬하게 되면 [-3,-5,1,2,4]으로 맨 앞의 인덱스는 음수, 뒤의 인덱스는 양수가 위치하게 된다
// 따라서 배열의 맨 앞의 두 인덱스의 곱, 맨 뒤 두 인덱스의 곱을 비교해주면 된다

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> numbers){
    sort(numbers.begin(), numbers.end()); // 오름차순으로 정렬
    int n = numbers.size(); // 맨뒤의 원소를 뽑기 위함
    return max(numbers[0]*numbers[1], numbers[n-1]*numbers[n-2]);
}