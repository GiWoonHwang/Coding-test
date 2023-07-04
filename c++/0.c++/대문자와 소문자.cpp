/*
문자열 my_string이 매개변수로 주어질 때, 대문자는 소문자로 소문자는 대문자로 변환한 문자열을 return하도록 solution 함수를 완성해주세요.

제한사항
1 ≤ my_string의 길이 ≤ 1,000
my_string은 영어 대문자와 소문자로만 구성되어 있습니다.
입출력 예
my_string	result
"cccCCC"	"CCCccc"
"abCdEfghIJ"	"ABcDeFGHij"
입출력 예 설명
입출력 예 #1

소문자는 대문자로 대문자는 소문자로 바꾼 "CCCccc"를 return합니다.
입출력 예 #2

소문자는 대문자로 대문자는 소문자로 바꾼 "ABcDeFGHij"를 return합니다.
*/

#include <string>
#include <vector>

using namespace std;

string solution(string my_string){
    for(auto& v : my_string){ // auto&, auto* -> auto는 타입을 추론하고 참조 하기 때문에 my_string 값 자체를 변환한다 ?
        if(islower(v))
        {
            v = toupper(v);
        }
        else{
            v = tolower(v);
        }
    }
    return my_string;
}




