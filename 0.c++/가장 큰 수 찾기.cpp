/*
정수 배열 array가 매개변수로 주어질 때, 가장 큰 수와 그 수의 인덱스를 담은 배열을 return 하도록 solution 함수를 완성해보세요.

제한사항
1 ≤ array의 길이 ≤ 100
0 ≤ array 원소 ≤ 1,000
array에 중복된 숫자는 없습니다.
입출력 예
array	        result
[1, 8, 3]	    [8, 1]
[9, 10, 11, 8]	[11, 2]
입출력 예 설명
입출력 예 #1

1, 8, 3 중 가장 큰 수는 8이고 인덱스 1에 있습니다.
입출력 예 #2

9, 10, 11, 8 중 가장 큰 수는 11이고 인덱스 2에 있습니다.
*/

#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int>array){
    vector<int> answer{array[0],0}; // 첫번째는 값, 두번째는 값에 대한 인덱스
    for(int i = 1; i<array.size(); i ++){
        if (answer[0] < array[i]){ // 현재 answer에 저장된 값보다 배열의 값이 더 크다면
            answer[1] = i; // 인덱스에 해당하는 숫자를 저장하고 
            answer[0] = array[i]; // 값을 바꿔준다
        }
    }
    return answer;

}