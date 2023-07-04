/*
문자열 my_string이 매개변수로 주어집니다. my_string을 거꾸로 뒤집은 문자열을 return하도록 solution 함수를 완성해주세요.

제한사항
1 ≤ my_string의 길이 ≤ 1,000
입출력 예
my_string	return
"jaron"	    "noraj"
"bread"	    "daerb"
입출력 예 설명
입출력 예 #1

my_string이 "jaron"이므로 거꾸로 뒤집은 "noraj"를 return합니다.
입출력 예 #2

my_string이 "bread"이므로 거꾸로 뒤집은 "daerb"를 return합니다.
*/

// 뒤부터 읽자, 작아지는 반복문을 사용하자, 받아오는 배열의 크기 -1 부터 i를 시작하면 문자열의 맨 뒤부터 i값이 할당된다. 그것을 새로 선언한 문자열 변수에 하나씩 더해준다.

#include <string>
#include <vector>
using namespace std;

string solution(string my_string){
    string answer = "";
    for(int i= my_string.size() -1; i >= 0; i --){
        answer += my_string[i];
        return answer;
    }
}