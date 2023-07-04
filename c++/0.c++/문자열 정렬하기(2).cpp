/*
입출력 예 설명
입출력 예 #1

"Bcad"를 모두 소문자로 바꾸면 "bcad"이고 이를 알파벳 순으로 정렬하면 "abcd"입니다.
입출력 예 #2

"heLLo"를 모두 소문자로 바꾸면 "hello"이고 이를 알파벳 순으로 정렬하면 "ehllo"입니다.
입출력 예 #3

"Python"를 모두 소문자로 바꾸면 "python"이고 이를 알파벳 순으로 정렬하면 "hnopty"입니다.
*/

#include <string>
#include <vector>
#include <algorithm> // 알고리즘 라이브러리

using namespace std;

string solution(string my_string){
    // transform(a,b,a ::op) a,b 까지 op를 실행하여 a값에서부터 저장한다.
    transform(my_string.begin(),my_string.end(),my_string.begin(), ::tolower);
    sort(my_string.begin(),my_string.end());
    return my_string;    
}
