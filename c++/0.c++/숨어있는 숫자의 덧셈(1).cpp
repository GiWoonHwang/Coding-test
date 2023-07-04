/*
문자열 my_string이 매개변수로 주어집니다. my_string안의 모든 자연수들의 합을 return하도록 solution 함수를 완성해주세요.

제한사항
1 ≤ my_string의 길이 ≤ 1,000
my_string은 소문자, 대문자 그리고 한자리 자연수로만 구성되어있습니다.
입출력 예
my_string	        result
"aAb1B2cC34oOp"	    10
"1a2b3c4d123"	    16
입출력 예 설명
입출력 예 #1

"aAb1B2cC34oOp"안의 한자리 자연수는 1, 2, 3, 4 입니다. 따라서 1 + 2 + 3 + 4 = 10 을 return합니다.
입출력 예 #2

"1a2b3c4d123Z"안의 한자리 자연수는 1, 2, 3, 4, 1, 2, 3 입니다. 따라서 1 + 2 + 3 + 4 + 1 + 2 + 3 = 16 을 return합니다.
*/

#include <string>
#include <vector>

using namespace std;

int solution(string my_string){

    int answer = 0;
    for(const auto v : my_string){
        if(isdigit(v)){ // 문자열안에 숫자가 존재하면
            answer += v-'0'; // 숫자로 변환해서 answer 누적 더하기를 진행한다.
        }
    }
    return answer;
}