/*

입출력 예 설명
my_string	    num1	num2	result
"hello"	        1	    2	    "hlelo"
"I love you"	3	    6	    "I l veoyou"

입출력 예 #1

"hello"의 1번째 인덱스인 "e"와 2번째 인덱스인 "l"을 바꾸면 "hlelo"입니다.
입출력 예 #2

"I love you"의 3번째 인덱스 "o"와 " "(공백)을 바꾸면 "I l veoyou"입니다.
*/

#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int num1, int num2){
    swap(my_string[num1], my_string[num2]);
    return my_string;
}
